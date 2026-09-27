/* Calculates string length with a custom function. */
#include <stdio.h>
#include <stdlib.h>
int stringlen(char string[100]){
int i=0,length=0;
while(string[i]!='\0')
{
    length++;
    i++;
}
return length;
}


int main()
{char a[100];
printf("enter string");
scanf("%s",&a);
printf("%d",stringlen(a));
    return 0;
}
