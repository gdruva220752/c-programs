/* Sums numbers below n divisible by both 3 and 5. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n,sum;
sum=0;
printf("enter n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    if (i%3==0 && i%5==0)
    {
        sum = sum + i;
    }
}
printf("%d",sum);
    return 0;
}
