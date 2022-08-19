#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter a and b value:=");
scanf("%d %d",&a,&b);
a=a+1;
b=b-1;
printf("a=%d \nb=%d",a,b);
c=a*b;
printf("\nc=%d",c);
getch();


}