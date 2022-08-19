#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter two value=\n");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("swaping values::-");
printf("\na=%d \nb=%d",a,b);
getch();

}