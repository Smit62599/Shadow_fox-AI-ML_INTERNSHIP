#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a,i,j,sum=0;
  clrscr();
  printf("enter a mtrix");
  scanf("%d",&a);
  for(i=0;i<2;i++)
  {
   for(j=0;j<3;j++)
   {
    scanf("%d",a);
    }
  }
  printf("two dimensional array element:\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    printf("%d");
    }
     printf("\n");
     }
     getch();
     }

