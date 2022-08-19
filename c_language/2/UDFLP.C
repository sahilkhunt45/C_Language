#include<stdio.h>
#include<conio.h>
void lower(char[],int);
void main()
{
//lower to uper
 int i,n;
 clrscr();
 char a[20];
 printf("enter your character:= ");
 scanf("%s",a);
 lower(a,n);
  getch();
}
void lower(char b[20],int n)
{
 int i;
    for(i=0;b[i]!='\0';i++)
    {
      printf("%c",b[i]-32);
    }
}