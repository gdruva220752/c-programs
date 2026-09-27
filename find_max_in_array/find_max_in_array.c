/* Finds the maximum value in an array. */
#include <stdio.h>
#include <stdlib.h>
int main()
{int i,n,max;
int num[100];
printf("Enter N:");
scanf("%d",&n);
printf("enter numbers:");
for(i=0;i<n;i++){
    scanf("%d",&num[i]);
}
max=num[0];
for(i=1;i<n;i++){
    if(num[i]>max){
        max=num[i];
    }
}
printf("maximum=%d",max);

    return 0;
}
