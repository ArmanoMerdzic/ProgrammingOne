/* Write a C program that reads three floating values and check if it is possible to make a triangle with them. 
   Also calculate the perimeter of the triangle if the said values are valid. */

#include <stdio.h>

int main() 
{
  float x, y, z, P;

  scanf("%f %f %f", &x, &y, &z);

    if (x < (y + z) && y < (x + z) && z < (y + x)) 
    {
      P = x + y + z;
      printf("Perimeter  = %.1f\n", P);
    } 
    else 
    {
      printf("Not possible to create a triangle.");
    }
  
  return 0;
}
