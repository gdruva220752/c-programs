/* Prints the first n even numbers. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n;
printf("enter n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("%d\n",2*i);
}
    return 0;
}
