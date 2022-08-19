#include<stdio.h>
#include<conio.h>
void main()
{
 char a[5],i;
 clrscr();
 for(i=0;i<5;i++)
 {
  scanf("%c",&a[i]);
 }
 for(i=4;i>=0;i--)
 {
  printf("%c",a[i]);
 }

 getch();

}