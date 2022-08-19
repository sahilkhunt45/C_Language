#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k;
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(k=1;k<6-i;k++)
  {
   printf("  ");
  }
  for(j=5;j>=6-i;j--)
  {
   printf("%d ",j);
  }
   for(k=7-i;k<=5;k++)
   {
    printf("%d ",k);
   }
   printf("\n");
 }
 getch();
}