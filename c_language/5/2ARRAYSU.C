#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],b[5],i,c[5];
 clrscr();
 for(i=0;i<5;i++)
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("b[%d]=",i);
  scanf("%d",&b[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("a[%d]=%d\n",i,a[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("b[%d]=%d\n",i,b[i]);
 }
  for(i=0;i<5;i++)
 {
  c[i]=a[i]+b[i];
  printf("%d\n",c[i]);
 }
 for(i=0;i<5;i++)
 {
 printf("%d  ",c[i]);
 }
 getch();
}