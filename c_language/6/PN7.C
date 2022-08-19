#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k;
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(k=1;k<i;k++)
  {
   printf("    ");
  }
  for(j=101;j<=106-i;j++)
  {
   printf("%d ",j);
  }
  printf("\n");
 }
 getch();
}