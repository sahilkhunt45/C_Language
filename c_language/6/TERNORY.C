#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter a and b value:=");
 scanf("%d %d",&a,&b);
 (a<b)?printf("a is small"):printf("b is big");
 getch();
}