/* Hottest, coldest, and average temperature from readings. */
#include <stdio.h>
#include <stdlib.h>


int main()
{int i,s;
int temp[100];
int max,min;
int avg,total;
printf("enter number of temperatures:");
scanf("%d",&s);
printf("enter temperatures:");
for(i=0;i<s;i++){
    scanf("%d",&temp[i]);
}
total=0;
for(i=0;i<s;i++)
{
    total=total+temp[i];
}
avg=total/s;
max=temp[0];
for(i=0;i<s;i++){
    if (temp[i]>max)
    {
        max=temp[i];
    }
}
min=temp[0];
for(i=0;i<s;i++){
    if (temp[i]<min)
    {
        min=temp[i];
    }
}
printf("hottest day is %d\n",max);
printf("coldest day is %d\n",min);
printf("average:%d",avg);
    return 0;
}
