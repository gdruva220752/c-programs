#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,t;
printf("enter number");
scanf("%d",&num);
if (num<0)
{
   t=-num;
}
else if(num>=0)
{
    t=num;
}
else
{
    printf("invalid");
}
printf("the absolute value is %d",t);
    return 0;
}
