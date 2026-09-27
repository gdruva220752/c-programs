#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int id;
    char name[45];
    float marks[5],total; char grade;
};

int main()
{   int n,i,j;

    float avg;
    printf("enter n: ");
    scanf("%d",&n);
    struct student *a;
    a = (struct student *)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    { (a+i)->total =0;
     printf("\n");
        printf("enter id %d:",i+1);
        scanf("%d",&(a+i)->id);
        printf("enter name %d:",i+1);
        scanf("%s",&(a+i)->name);
        for (j=0;j<5;j++)
        {
        printf("enter marks of subject %d:",j+1);
        scanf("%f",&(a+i)->marks[j]);
        (a+i)->total=(a+i)->total+(a+i)->marks[j];
        }
        avg=(a+i)->total/5.0;
        if (avg >= 90)
   {
       (a+i)->grade='A';
   }
   else if (avg >= 80&& avg <90)
   {
       (a+i)->grade='B';
   }
   else if (avg >= 70&& avg <80)
   {
       (a+i)->grade='C';
   }
   else if (avg >= 60&& avg <70)
   {
       (a+i)->grade='D';
   }
   else if (avg < 60)
   {
       (a+i)->grade='F';
   }
    }

    for(i=0;i<n;i++)
    {   printf("\n");
        printf("id %d :%d\n",i+1,(a+i)->id);
        printf("name %d:%s\n",i+1,(a+i)->name);
        printf("marks %d:",i+1);
        for (j=0;j<5;j++)
        {
            printf("%.2f\n",(a+i)->marks[j]);
        }  printf("grade =%c",(a+i)->grade);
    }

    free(a);
    return 0;
}
