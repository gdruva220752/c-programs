/* Checks if a number is a palindrome. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n,rev,rem,o;
printf("enter num");
scanf("%d",&n);
rev=0;
o=n;
while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
    if(o==rev)
{printf("pallindrome");}
else if(o!=rev)
{printf("not pallindrome");}
else {
    printf("invalid");
}
    return 0;
}
