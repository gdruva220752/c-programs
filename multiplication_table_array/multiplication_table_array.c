/* Builds a multiplication table using an array. */
#include <stdio.h>
#include <stdlib.h>

int main()
{int mat[11],i,n;
printf("enter n:");
scanf("%d",&n);
for(i=1;i<=10;i++){
 mat[i]=n*i;
}
printf("multiplication table:");
for(i=1;i<=10;i++){
    printf("%d x %d = %d\n",n,i,mat[i]);
}
    return 0;
}
