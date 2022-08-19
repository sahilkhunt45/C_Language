#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter Age:=");
 scanf("%d",&n);
 if(n>18 || n==18)
 {
  printf("you are voting");
 }
 else
 {
  printf("you are not voting");
 }
getch();
}