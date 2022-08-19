#include<stdio.h>
#include<conio.h>
void main()
{
char no;
clrscr();
printf("Enter no value:=");
scanf("%c",&no);
if(no>=97 && no<122 || no>=65 && no<=90)
{
 printf("alphabet");
 printf("%d",no);
}
else if(no>=48 && no<=57)
{
 printf("digit");
 printf("%d",no);
}
else
{
 printf("special character");
 printf("%d",no);
}
getch();
}