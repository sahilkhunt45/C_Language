#include<stdio.h>
#include<conio.h>
int fact();
void main()
{
 int c;
 clrscr();
 c=fact();
 printf("Factorial=%d",c);

 getch();
}
 int fact()
{
 int no,fac=1;
 clrscr();
 printf("enter no. value:=\n");
 scanf("%d",&no);
 while(no!=0)
 {
  fac=fac*no;
  no--;
 }
 return fac;
}