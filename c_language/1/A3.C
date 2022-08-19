#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter a and b value");
 scanf("%d %d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("a=%d b=%d",a,b);
 getch();

}