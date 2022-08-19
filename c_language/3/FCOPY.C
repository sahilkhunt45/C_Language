#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[5],b[5];
 clrscr();
 puts("string A:=\n");
 gets(a);
 strcpy(b,a);
 puts("string b:=\n");
 puts(b);
getch();
}