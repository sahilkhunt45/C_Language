#include<stdio.h>
#include<conio.h>
#include<string.h>
//remove space:=
void main()
{
 char a[10];
 int i;
 clrscr();
 scanf("%[^\n]",a);
 for(i=0;a[i]!='\0';i++)
 {
    if(a[i]!=' ')
   {
    printf("%c",a[i]);
   }
 }
  getch();
 }