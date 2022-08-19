#include<stdio.h>
#include<conio.h>
void insert(int[],int);
void main()
{
 int a[100],n,i,pos,val;
 clrscr();
 printf("enter your array size:=");
 scanf("%d",&n);
 printf("enter your array:=\n");
 for(i=0;i<n;i++)
 {
   printf("a[%d]=",i);
   scanf("%d",&a[i]);
 }
 insert(a,n);
 getch();
}
void insert(int b[100],int n)
{
 int pos,val,i;
 printf("enter you want update array position:=");
 scanf("%d",&pos);
 printf("enter your new update value:=");
 scanf("%d",&val);
 b[pos]=val;
 for(i=0;i<n;i++)
 {
   printf("\nb[%d]=%d",i,b[i]);
 }
 getch();
}