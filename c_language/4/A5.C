#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5][5],b[5][5],c[10][10],i,j,n;
 clrscr();
 printf("ENTER A SIZE OF ARRAY:=");
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
     printf("b[%d][%d]=",i,j);
     scanf("%d",&b[i][j]);
   }
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   {
     c[i][j]=a[i][j]+b[i][j];
   }
 }
 printf("Addition of two matrix:=\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   {
     printf("%d ",c[i][j]);
   }
   printf("\n");
 }
 getch();
}