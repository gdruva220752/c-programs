#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,n,d,an,sn;
  printf("enter first term ");
  scanf("%d",&a);
  printf("enter no of terms ");
  scanf("%d",&n);
  printf("enter difference ");
  scanf("%d",&d);
  an=a+((n-1)*d);
  printf("the nth term is %d\n",an);
  sn=n*(a+an)/2;
  printf("sum of n terms is %d",sn);
    return 0;
}
