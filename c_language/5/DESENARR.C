#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],n,i,j,t;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]< a[j])
   {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
   }
   }
   }
  for(i=0;i<n;i++)
  {
   printf("\na[%d]=%d",i,a[i]);
 }

 getch();
}