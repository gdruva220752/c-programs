/* Determines which quadrant a point (x,y) lies in. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int x,y;
printf("enter x,y");
scanf("%d %d",&x,&y);
if (x>0&&y>0){
    printf("1st quadrant");
}
else if (x<0&&y>0){
    printf("2nd quadrant");
}
else if (x<0&&y<0){
    printf("3rd quadrant");
}
else if (x>0&&y<0){
    printf("4th quadrant");
}
else
{
    printf("invalid");
}
    return 0;
}
