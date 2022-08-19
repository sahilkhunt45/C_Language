#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,n,pos,val;
 clrscr();
 printf("enter value of array:= ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("a[%d]=
  ",i);
  scanf("%d",&a[i]);
 }
 printf("enter the position to update= ");
 scanf("%d",&pos);
 printf("enter the value:= ");
 scanf("%d",&val);
 a[pos]=val;
 for(i=0;i<n;i++)
 {
  printf("a[%d]=%d\n",i,a[i]);
 }
 getch();
}