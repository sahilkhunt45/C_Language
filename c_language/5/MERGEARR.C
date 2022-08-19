#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],b[5],c[10],n,i,j;
 clrscr();
// scanf("%d",&n);
  for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  c[i]=a[i];
 }
 for(i=0;i<5;i++)
 {
  scanf("%d",&b[i]);
 }
 for(i=0,j=5;i<10;i++,j++)
 {
   c[j]=b[i];
 }
 for(i=0;i<10;i++)
 {
  printf("%d ",c[i]);
 }
 getch();
}