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
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
  {
    if(i>=j)
    {
     printf("%d ",a[i][j]);
    }
    else
    {
     printf("  ");
    }
  }
   printf("\n");
 }
getch();
}