#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct song
{
    int song_ID;
    char title[30];
    char singer[30];
    char music_director[30];
    float duration;
}s1;
int main()
{ int i ;
   s1.song_ID= 1084;
   strcpy(s1.title,"adigaa");
   strcpy(s1.singer,"sid sriram");
   strcpy(s1.music_director,"Amit Trivedi");
   s1.duration=4.27;
   printf("%d \n%s \n%s \n%s \n%0.2f \n", s1.song_ID,s1.title,s1.singer,s1.music_director,s1.duration);
   struct song s2={1085,"pilla raa","anurag kulkarni","chaitan bharadwaj",4.17};
   printf("%d \n%s \n%s \n%s \n%0.2f \n", s2.song_ID,s2.title,s2.singer,s2.music_director,s2.duration);
   struct song s[3] ={
      {1086,"oohale","sid sriram","mickey J Meyer",4.25},
      {1087,"unnatundi gundey","anurag kulkarni","anup Rubens",4.18},
      {1088,"ori ori devudo","anirudh Ravichander","anirudh Ravichander",4.10}
  };

  for(i=0;i<3;i++)
  {
       printf("song no:%d\n ", s[i].song_ID);
       printf("title=%s \n ", s[i].title);
       printf(" singer =%s \n ",s[i].singer);
       printf(" music director =%s \n ",s[i].music_director);

       printf("duration =%0.2f \n",s[i].duration);
  };
  return 0;

}
