#include<stdio.h>
#include<conio.h>
void swap();
void main()
{
 swap();
 getch();
}
void swap()
{
 int a,b,c;
 clrscr();
 printf("enter a and b value:=\n");
 scanf("%d %d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("after swapping:=\n");
 printf("\na=%d \nb=%d",a,b);
}