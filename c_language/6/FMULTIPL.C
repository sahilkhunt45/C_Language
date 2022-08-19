#include<stdio.h>
#include<conio.h>
void main()
{
 int no,fact=1;
 clrscr();
 printf("Enter n value:=");
 scanf("%d",&no);
 while(no!=0)
 {
  fact=fact*no;
  no--;
 }
 printf("%d",fact);
 getch();
}