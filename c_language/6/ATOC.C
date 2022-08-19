#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("Enter no value:=");
scanf("%d",&no);
if(no>='a' && no<'z' || no>='A' && no<='Z')
{
 printf("alphabet");
 printf("%c",no);
}
else if(no>='0' && no<='9')
{
 printf("digit");
 printf("%c",no);
}
else
{
 printf("%c",no);
}
getch();

}