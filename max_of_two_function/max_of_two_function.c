#include <stdio.h>
#include <stdlib.h>
int maximum(int x,int y)
{if (x>y)
{
    return x;
}
else
{
    return y;
}
}
int main()
{int a,b;
printf("enter a,b :");
scanf("%d %d",&a,&b);
int max=maximum(a,b);
    printf("%d",max);
    return 0;
}
