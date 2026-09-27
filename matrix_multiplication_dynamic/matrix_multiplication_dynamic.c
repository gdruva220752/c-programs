#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,k,m,n1,n2,p;
printf("enter  number of rows and column of matrix A:");
scanf("%d %d",&m,&n1);
printf("enter number of rows and column of matrix B:");
scanf("%d %d",&n2,&p);
if (n1!=n2){
    return 1;
}
int **a=(int **)malloc(m*sizeof(int*));
for (i=0;i<m;i++)
{ a[i]=(int *)malloc(n1*sizeof(int));

}
int **b=(int **)malloc(n2*sizeof(int*));
for (i=0;i<n2;i++)
{ b[i]=(int *)malloc(p*sizeof(int));

}
int **c=(int **)malloc(m*sizeof(int*));
for (i=0;i<m;i++)
{ c[i]=(int *)malloc(p*sizeof(int));
}
printf("enter the values of matrix A (%d x %d):",m,n1);
for(i=0;i<m;i++)
{
    for (j=0;j<n1;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the values of matrix B(%d x %d):",n1,p);
for(i=0;i<n2;i++)
{
    for (j=0;j<p;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<m;i++)
{
    for (j=0;j<p;j++)
    {
        c[i][j]=0;
    }
}
for(i=0;i<m;i++)
{
    for(j=0;j<n1;j++){
        for(k=0;k<p;k++)
        {
            c[i][k]+=a[i][j]*b[j][k];
        }
    }
}
printf("Matrix A:");
printf("\n");
for(i=0;i<m;i++)
{
    for (j=0;j<n1;j++)
    {
        printf("%d ",a[i][j]);
    }printf("\n");
}
printf("Matrix B:");
printf("\n");
for(i=0;i<n2;i++)
{
    for (j=0;j<p;j++)
    {
        printf("%d ",b[i][j]);
    }printf("\n");
}
printf("Matrix C:");
printf("\n");
for(i=0;i<m;i++)
{
    for (j=0;j<p;j++)
    {
        printf("%d ",c[i][j]);
    }printf("\n");
}
for (i=0;i<m;i++)
{
    free(a[i]);
} free(a);
for (i=0;i<n1;i++)
{
    free(b[i]);
} free(b);
for (i=0;i<m;i++)
{
    free(c[i]);
} free(c);
return 0;
}
