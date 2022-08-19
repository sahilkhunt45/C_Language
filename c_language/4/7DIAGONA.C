#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],i,n,j,sum=0;
 clrscr();
 printf("enter a size of array:= ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
     {
       printf("a[%d]=",i,j);
       scanf("%d",&a[i][j]);
     }
  }
 for(i=0;i<n;i++)
  {
    sum=sum+a[i][i];
  }
  printf("\nthe sum of diagonal matrix := %d",sum);
getch();
}