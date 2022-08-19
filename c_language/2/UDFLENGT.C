#include<stdio.h>
#include<conio.h>
#include<string.h>
void length(char[],int);
void main()
{
 int i,n;
 char a[100];
 clrscr();
 printf("enter your character:=");
 gets(a);
 length(a,n);
 getch();
}
void length(char b[100],int n)
{
 int i;
 n=strlen(b);
 printf("your length are %d.",n);

}
