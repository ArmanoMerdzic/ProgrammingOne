#include "Vector.h"

#include <errno.h>   
#include <stddef.h>  
#include <stdio.h>   
#include <stdlib.h>  
#include <string.h>  
#include <stdbool.h> 
#include <assert.h>  

static void *wrap_malloc(size_t bytes)
{
  if (bytes > 0)
  {
    void *ptr = malloc(bytes);
    if (ptr == NULL)
    {
      printf("Error allocating %ld bytes: %s \n", bytes, strerror(errno));
      exit(EXIT_FAILURE);
    }
    return ptr;
  }
  else
  {
    return NULL;
  }
}

static void *wrap_realloc(void *ptr, size_t new_bytes)
{
  if (new_bytes > 0)
  {
    ptr = realloc(ptr, new_bytes);
    if (ptr == NULL)
    {
      printf("Error reallocating %ld bytes: %s \n", new_bytes, strerror(errno));
      exit(EXIT_FAILURE);
    }
    return ptr;
  }
  else
  {
    free(ptr);
    return NULL;
  }
}

static void wrap_free(void *ptr)
{
  free(ptr);
}

void vector_reserve(Vector *self, size_t cap)
{
  if (self->cap < cap)
  {
    if (self->cap == 0)
    { // empty: malloc
      self->data = wrap_malloc(cap * sizeof(double));
      self->cap = cap;
    }
    else
    { // non-empty: realloc
      size_t new_cap = self->size * 2 > cap ? self->size * 2 : cap;
      self->data = wrap_realloc(self->data, new_cap * sizeof(double));
      self->cap = new_cap;
    }
  }
}

void vector_shrink(Vector *self)
{
  if (self->cap == self->size)
    return;

  self->data = wrap_realloc(self->data, self->size * sizeof(double));
  self->cap = self->size;
}

Vector *vector_new()
{
  Vector *res = wrap_malloc(sizeof(Vector));
  res->data = NULL;
  res->size = 0;
  res->cap = 0;
  return res;
}

void vector_delete(Vector **self)
{
  vector_free(*self);
  wrap_free(*self);
  *self = NULL;
}

void vector_init(Vector *self, size_t n, double init)
{
  vector_reserve(self, n);
  self->size = n;
  for (size_t i = 0; i != self->size; ++i)
    self->data[i] = init;
}

void vector_free(Vector *self)
{
  wrap_free(self->data);
  self->data = NULL;
  self->size = self->cap = 0;
}

void vector_clear(Vector *self)
{
  self->size = 0;
}

void vector_push_back(Vector *self, double value)
{
  vector_reserve(self, self->size + 1);
  self->data[self->size] = value;
  ++self->size;
}

void vector_pop_back(Vector *self)
{
  assert(self->size > 0);
  --self->size;
}

void vector_insert_before(Vector *self, size_t n, double value)
{
  assert(n >= 0 && n <= self->size);
  vector_reserve(self, self->size + 1);
  for (size_t i = self->size; i != n; --i)
    self->data[i] = self->data[i - 1];
  self->data[n] = value;
  ++self->size;
}

void vector_erase(Vector *self, size_t n)
{
  assert(n >= 0 && n <= self->size - 1);
  for (size_t i = 1 + n; i != self->size; ++i)
    self->data[i - 1] = self->data[i];
  --self->size;
}

void vector_push_front(Vector *self, double value)
{
  vector_insert_before(self, 0, value);
}

void vector_pop_front(Vector *self)
{
  vector_erase(self, 0);
}

void vector_reverse(Vector *self)
{
  double *first = self->data;
  double *last = self->data + self->size;
  while (first != last && first != last - 1)
  {
    --last;
    double tmp = *last;
    *last = *first;
    *first = tmp;
    ++first;
  }
}

void vector_print(const Vector *self)
{
  printf("Vector(size=%li, capacity=%li, memory address=%p): \n", self->size, self->cap,
         (void*)self->data);
  for (size_t i = 0; i != self->size; ++i)
  {
    printf("%f ", self->data[i]);
  }
  printf("\n");
}

