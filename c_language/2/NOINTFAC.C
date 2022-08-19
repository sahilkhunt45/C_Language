#include<stdio.h>
#include<conio.h>
void fact(int);
void main()
{
 int no;
 clrscr();
 printf("enter no. value:=\n");
 scanf("%d",&no);
 fact(no);
 getch();
}
 void fact(int x)
{
int y=1;
 while(x!=0)
 {
  y=y*x;
  x--;
 }
 printf("%d",y);
}