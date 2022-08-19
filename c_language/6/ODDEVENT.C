#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter n value");
 scanf("%d",&n);
 (n%2==0)?printf("n is even"):printf("n is odd");
 getch();
}