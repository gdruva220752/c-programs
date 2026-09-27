/* Prints numbers 1 to n and back down to 1. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i,j;
printf("enter n");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
    printf("%d",i);
}
printf("\n");
for (i=n;i>=1;i--)
{
    printf("%d",i);
}
    return 0;
}
