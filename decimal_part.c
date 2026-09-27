/* Prints the decimal part of a floating-point number. */
#include <stdio.h>
#include <stdlib.h>

int main()
{ double num,decipart;
  printf("enter number");
  scanf("%lf",&num);
  decipart=num-(int)num;
  printf("decimal part = %lf",decipart);
    return 0;
}
