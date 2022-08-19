#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],n,i,j,f=0;
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
   if(a[i][j]!=a[j][i])
     {
       f=0;
       break;
     }
   }
   printf("\n");
 }
 if(f==1)
 {
  printf(" not symatrix");
 }
 else
 {
  printf(" symatrix");
 }

 getch();
}