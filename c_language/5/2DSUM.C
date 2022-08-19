#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5][5],i,j,n,sum=0;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
  {
  printf("a[%d][%d]=",i,j);
  scanf("%d",&a[i][j]);
  sum = sum + a[i][j];
  }
 }
  printf("%d",sum);
 getch();
 }

