#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,c;
printf("enter 3 numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b & b>c)
{printf("%d is maximum\n",a);
printf("%d is minimum\n",c);}
else if( c>b & b>a)
{printf("%d is maximum\n",c);
printf("%d is minimum\n",a);}
else if (b>a & a>c)
{printf("%d is maximum\n",b);
printf("%d is minimum\n",c);}
    return 0;
}
