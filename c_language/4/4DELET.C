#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,pos,val;
 clrscr();
 printf("ENTER A SIZE OF ARRAY:=");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     printf("a[%d]=",i);
     scanf("%d",&a[i]);
 }
     printf("enter position:= ");
     scanf("%d",&pos);
  for(i=n-1;i>=pos;i--)
   {
     a[i+1]=a[i];
   }
   a[val]=pos;
   n--;
 for(i=0;i<n;i++)
 {
   printf("a[%d]=%d",i,a[i]);
   printf("\n");
 }
 getch();
 }
