#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
 int r,Area;
 clrscr();
 printf("Enter value:=");
 scanf("%d",&r);
 Area=PI*r*r;
 printf("Area=%d",Area);
 getch();
}