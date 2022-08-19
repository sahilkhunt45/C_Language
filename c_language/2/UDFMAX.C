#include<stdio.h>
#include<conio.h>
#define S scanf
#define P printf
void comp(int,int,int);
void main()
{
 int a,b,c;
 clrscr();
 P("enter a value:=\n");
 S("%d",&a);
 P("enter b value:=\n");
 S("%d",&b);
 P("enter c value:=\n");
 S("%d",&c);
 comp(a,b,c);
 getch();
}
void comp(int x,int y,int z)
{
(x>y)?(x>z)?printf("a is big"):printf("b is big"):
(y>z)?printf("b is big"):printf("c is big");
}