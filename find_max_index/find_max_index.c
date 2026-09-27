/* Finds the index of the maximum value in an array. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n,k;
int num[100];
printf("enter n:");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&num[i]);
}
k=0;

for(i=0;i<n;i++){
    if (num[k]<num[i])
    {
        k=i;
    }
}
printf("max index %d",k);
    return 0;
}
