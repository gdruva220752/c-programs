/* Calculates travel time given distance and speed. */
#include <stdio.h>
#include <stdlib.h>

int main()
{ int dist,speed,time;
  printf("enter distance in km");
  scanf("%d",&dist);
  printf("enter speed in kmph");
  scanf("%d",&speed);
  time = dist/speed;
  printf("time is %d hr",time);
    return 0;
}
