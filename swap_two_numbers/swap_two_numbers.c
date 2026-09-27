#include <stdio.h>
#include <stdlib.h>

int main()
{ int a=1,b=2,temp;
 temp=a;
 a=b;
 b=temp;
 printf("a= %d,b=%d",a,b);
    return 0;
}
