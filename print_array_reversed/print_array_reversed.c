/* Prints array elements in reverse order. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int arr[100];
int i,n;
printf("enter n:");
scanf("%d",&n);
printf("enter values:");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("reversed array:");
for(i=n-1;i>=0;i--){
    printf("%d\n",arr[i]);
}
    return 0;
}
