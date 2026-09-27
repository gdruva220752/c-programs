/* Copies a date (day, month, year) array into another. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int a[3],b[3];
int i;
printf("enter date");
scanf("%d",&a[0]);
printf("enter month");
scanf("%d",&a[1]);
printf("enter year");
scanf("%d",&a[2]);
for(i=0;i<3;i++)
{
   b[i]=a[i];
}
printf("%d %d %d",b[0],b[1],b[2]);
    return 0;
}
