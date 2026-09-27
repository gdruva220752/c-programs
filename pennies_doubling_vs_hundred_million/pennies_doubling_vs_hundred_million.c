/* Doubles a value daily and compares to 100 million. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n;
unsigned long long c;
printf("enter num");
scanf("%d",&n);
c=1;
for(i=1;i<=n;i++)
{
    c=c*2;
}
printf("%llu\n",c);
if(c>=100000000){
    printf("cent doubles a day is better");
}
else if(c<100000000)
{
    printf("1 millon is better");
}
else
{
    printf("invalid");
}
    return 0;
}
