#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n1,n2,n3;
 float avg;
 printf("enter numbers");
 scanf("%d %d %d",&n1,&n2,&n3);
 avg=(n1+n2+(float)n3)/3;
 printf("average = %f",avg);
    return 0;
}
