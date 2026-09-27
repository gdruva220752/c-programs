/* Reverses the digits of a 3-digit number. */
#include <stdio.h>
#include <stdlib.h>

int main()
{ int num,h,t,o,r;
  printf("enter the number");
  scanf("%d",&num);
  h=num/100;
  t=(num-(h*100))/10;
  o=(num-((h*100)+(t*10)));
  r=(o*100)+(t*10)+h;
  printf("%d",r);
    return 0;
}
