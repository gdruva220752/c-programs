/* Calculates rectangle area using a function. */
#include <stdio.h>
#include <stdlib.h>
int Area(int h,int w){
int A=h*w;
return A;
}
int main()
{int a,b,ar;
printf("enter height and width:");
scanf("%d %d",&a,&b);
ar=Area(a,b);
printf("Area =%d",ar);
    return 0;
}
