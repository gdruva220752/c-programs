/* Prints day, month, and year in hexadecimal. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int year,mnt,d;
printf("enter day:");
scanf("%d",&d);
printf("enter month:");
scanf("%d",&mnt);
printf("enter year ");
scanf("%d",&year);
printf("day = %x\n",d);
printf("month = %x\n",mnt);
printf("year = %x\n",year);
    return 0;
}
