#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5][5],i,n,j;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
  {
    printf("a[%d][%d]=",i,j);
    scanf("%d",&a[i][j]);
  }
 }
 printf("this is a diagonal matrix:\n");
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
  {
    printf("%d ",a[j][i]);
  }
  printf("\n");
 }
 getch();
}