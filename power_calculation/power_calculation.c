#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,p,a;
    i=1;
    a=1;
    printf("enter num:");
    scanf("%d",&num);
    printf("enter power");
    scanf("%d",&p);
    while(i<= p)
    {
        a=a*num;
        i=i+1;
    }
    printf("%d",a);
return 0;
}
