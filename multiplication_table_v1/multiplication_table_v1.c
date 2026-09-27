/* Prints the multiplication table of a number. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,m;
    printf("enter n");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        m=n*i;
        printf("%dx%d=%d \n",n,i,m);
    }
    return 0;
}
