#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter a,b and c value:=");
scanf("%d %d %d",&a,&b,&c);
(a>b)?(a>c)?printf("a is max"):printf("c is max"):
      (b>c)?printf("b is max"):printf("c is max");
getch();
}
