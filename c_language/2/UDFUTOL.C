#include<stdio.h>
#include<conio.h>
void uper(char[],int);
void main()
{
//uper to lower
 int i,n;
 clrscr();
 char a[20];
 printf("enter your character:= ");
 scanf("%s",a);
 uper(a,n);
  getch();
}
void uper(char b[20],int n)
{
 int i;
    for(i=0;b[i]!='\0';i++)
    {
      printf("%c",b[i]+32);
    }
}