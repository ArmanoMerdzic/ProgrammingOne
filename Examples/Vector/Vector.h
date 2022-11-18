#pragma once

#include <stddef.h>  // size_t
#include <stdbool.h> // bool

typedef struct Vector
{
  double *data; //  points to the first element
  size_t size;  //  current number of elements
  size_t cap;   //  current capacity
} Vector;

void vector_reserve(Vector *self, size_t cap);
void vector_shrink(Vector *self);

Vector *vector_new();
void vector_delete(Vector **self);

void vector_init(Vector *self, size_t n, double init);
void vector_free(Vector *self);
void vector_clear(Vector *self);

void vector_push_back(Vector *self, double value);
void vector_pop_back(Vector *self);

void vector_push_front(Vector *self, double value);
void vector_pop_front(Vector *self);

void vector_insert_before(Vector *self, size_t n, double value);
void vector_erase(Vector *self, size_t n);

void vector_reverse(Vector *self);

void vector_print(const Vector *self);

