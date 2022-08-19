#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20][20];
 int i,j,length=0;
 clrscr();
 length=strlen(a[i]);
 for(i=0;i<4;i++)
 {
  gets(a[i]);
  length=length+strlen(a[i]);
 }
 for(i=0;a[i][j]!='\0';i++)
 {
   puts(a[i]);
 }
 printf("%d",length);
 getch();
}