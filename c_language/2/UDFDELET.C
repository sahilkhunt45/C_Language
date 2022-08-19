#include<stdio.h>
#include<conio.h>
void insert(int[],int);
void main()
{
 int a[100],n,i;
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
 int pos,i;
 printf("enter your delete array position:=");
 scanf("%d",&pos);
 for(i=pos;i<=n-1;i++)
 {
  b[i]=b[i+1];
 }
 n--;
 for(i=0;i<n;i++)
 {
   printf("\nb[%d]=%d",i,b[i]);
 }
 getch();
}