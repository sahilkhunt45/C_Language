#include<stdio.h>
#include<conio.h>
void revers(int[],int);
void main()
{
 int n,i,a[100];
 clrscr();
 printf("enter your array size:=");
 scanf("%d",&n);
 printf("enter your array:=\n");
 for(i=0;i<n;i++)
 {
   printf("a[%d]=",i);
   scanf("%d",&a[i]);
 }
 revers(a,n);
 getch();
}
void revers(int b[100],int n)
{
 int i,j,s;
 printf("your revers array:=\n");
 for(i=0,j=n-1;i<n/2;i++,j--)
 {
  s=b[i];
  b[i]=b[j];
  b[j]=s;
 }
 for(i=0;i<n;i++)
 {
  printf("b[%d]=%d\n",i,b[i]);
 }
}

