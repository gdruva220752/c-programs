/* Calculates the factorial of a number. */
#include <stdio.h>
#include <stdlib.h>
void factorial(int a){
int i,f;
f=1;
for(i=0;i<a;i++){
f = f*(i+1);}
printf("fact=%d",f);
}
int main()
{
int n;
printf("enter n:");
scanf("%d",&n);
factorial(n);
    return 0;
}
