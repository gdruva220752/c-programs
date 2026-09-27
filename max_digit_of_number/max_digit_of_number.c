/* Finds the larger of two digits in a 2-digit number. */
#include <stdio.h>
#include <stdlib.h>
int max(int n){
int mx;
int h=n/100;
int t=(n-(h*100))/10;
int o=(n-(h*100+t*10));
if (h==0&&t>o)
mx = t;
else if(h==0&&o>t)
mx = o;
return mx;
}

int main()
{int a,m;
printf("enter number");
scanf("%d",&a);
m=max(a);
printf("max %d",m);

    return 0;
}
