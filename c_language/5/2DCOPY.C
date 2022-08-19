#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n,a[5][5],b[5][5];
 clrscr();
 printf("enter a value:= ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
    {
      printf("a[%d][%d]=",i,j);
      scanf("%d",&a[i][j]);
    }
 }
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
    {
      b[i][j]=a[i][j];
    }
 }
  for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
    {
      printf("\nb[%d][%d]=%d",i,j,b[i][j]);
    }
 }
 getch();

}