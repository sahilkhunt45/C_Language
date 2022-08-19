#include<stdio.h>
#include<conio.h>
#define A 32
#define B 5/9
void main()
{
 float f,c;
 clrscr();
 printf("Enter the value:=");
 scanf("%f",&f);
 c=f-A*B;
 printf("c=%.2f",c);
 getch();

}