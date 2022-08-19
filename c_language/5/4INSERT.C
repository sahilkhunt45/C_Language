#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,pos,val;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
  }
  printf("enter a position:= ");
  scanf("%d",&pos);
  printf("enter new insert value:= ");
  scanf("%d",&val);
  for(i=n-1;i>pos;i--)
  {
   a[i+1]=a[i];
  }
  a[pos]=val;
  n++;
  for(i=0;i<n;i++)
  {
   printf("a[%d]=%d\n",i,a[i]);
  }
  getch();
 }