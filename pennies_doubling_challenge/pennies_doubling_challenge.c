/* Doubles a value daily, checks if it beats one million. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n,c;
printf("enter days");
scanf("%d",&n);
c=1;
for(i=1;i<=n;i++)
{ c=c*2;
    }
printf("%d\n",c);
if(c>=1000000)
{printf("its best to take doubles a day");}
else
{
    printf("take 1 millon");
}
    return 0;
}
