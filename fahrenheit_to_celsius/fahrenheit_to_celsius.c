#include <stdio.h>
#include <stdlib.h>

int main()
{ float F,C;

    printf("enter temp in F");
    scanf("%f", &F);
    C=(F-32)/1.8;
    printf("temp in c is %f",C);

    return 0;
}
