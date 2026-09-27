#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
     printf("enter grade");
     scanf("%d",&grade);
     while(grade <0 || grade>= 100 ){
     printf("enter grade");
     scanf("%d",&grade);
     }
     printf("entered a legit score");


    return 0;
}
