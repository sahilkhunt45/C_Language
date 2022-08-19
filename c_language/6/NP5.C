#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,l;
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=6-i;j++)
  {
   printf("%d",j);
  }
  for(k=i;k<i;k++)
  {
   printf("  ");
  }
   for(l=6-i;l<=1;l--)
   {
    printf("%d ",l);
   }
   printf("\n");
 }
 getch();
}