/* Calculates distance between two (x,y) coordinates. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{int x1,x2,y1;
float y2,d;
printf("enter x1,x2,y1,y2");
scanf("%d %d %d %f",&x1,&x2,&y1,&y2);
d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
printf("%f",d);
    return 0;
}
