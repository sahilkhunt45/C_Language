#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,n;
 clrscr();
 printf("enter a size of array:= ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   printf("a[%d]=",i);
   scanf("%d",&a[i]);
  }
   printf("\nnegative value in array are:= ");
 for(i=0;i<n;i++)
 {
   if(a[i]<0)
   {
    printf("%d ",a[i]);
   }
 }
getch();
}