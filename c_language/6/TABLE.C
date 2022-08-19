#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,no,multi;
 clrscr();
 printf("Enter table number:=");
 scanf("%d",&no);
 while(i<=10)
 {
  multi = no * i;
  printf("%d*%d=%d\n",no,i,multi);
  i++;
 }
 getch();
}