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
  for(j=6-i;j<=5;j++)
  {
   printf("%d ",j);
  }
   for(k=4;k>=6-i;k--)
   {
    printf("%d ",k);
   }
   printf("\n");
 }
 getch();
}