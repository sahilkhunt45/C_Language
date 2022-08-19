#include<stdio.h>
#include<conio.h>
#define A 9/5
#define B 32
void main()
{
float celsius,fahrenheit;
clrscr();
printf("Enter celsius value:=");
scanf("%f",&celsius);
fahrenheit=celsius*A+B;
printf("fahrenheit=%.1f",fahrenheit);
getch();
}