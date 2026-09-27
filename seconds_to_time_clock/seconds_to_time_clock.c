#include <stdio.h>
#include <stdlib.h>

int main()
{ int sec,hr,min,E_time,hr2,min2,sec2;
  printf("enter time in sec");
  scanf("%d",&E_time);
  hr = E_time/3600;
  min = (E_time-(hr*3600))/60;
  sec= (E_time-(min*60+(hr*3600)));
  printf("%02d:%02d:%02d",hr,min,sec);
    return 0;
}
