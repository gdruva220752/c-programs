#include <stdio.h>
#include <stdlib.h>

int main()
{ int yr;
  printf("enter year");
  scanf("%d",&yr);
  if (yr % 4 ==0){
    printf("leap year");}
  else if (yr % 4 !=0){
    printf("normal year");}
else
{
    printf("invalid");
}
    return 0;
}
