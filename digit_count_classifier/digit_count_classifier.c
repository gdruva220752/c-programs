/* Classifies a number as 1, 2, 3, or 4 digits. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int num,h,t,o,th;
printf("entered number");
scanf("%d",&num);
th=num/1000;
h=(num-(th*1000))/100;
t=(num-((th*1000)+(h*100)))/10;
o=(num-((th*1000)+(h*100)+(t*10)));
if(th!=0)
{
    printf("4 digit");
}
else if(th==0&&h!=0)
{
    printf("3 digit");}
else if(th==0&&h==0&&t!=0)
{
    printf("2 digit");}
else if(th==0&&h==0&&t==0&&o!=0)
{
    printf("1 digit");}
else
{
    printf("invalid input");
}

    return 0;
}
