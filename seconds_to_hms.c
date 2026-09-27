/* Converts elapsed seconds into hours, minutes, and seconds. */
#include <stdio.h>
#include <stdlib.h>

int main()
{ int sec,hr,min,E_time;
  printf("enter time in sec");
  scanf("%d",&E_time);
  hr = E_time/3600;
  min = (E_time-(hr*3600))/60;
  sec= (E_time-(min*60+(hr*3600)));
  printf("%d hr %d min %d sec",hr,min,sec);
    return 0;
}
