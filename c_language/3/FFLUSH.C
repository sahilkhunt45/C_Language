#include<stdio.h>
#include<conio.h>
void main()
{
 char a[5]={"sahil"},i;
 clrscr();
 for(i=0;i<5;i++)
 {
  fflush(stdin);
  scanf("%c",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("%c",a[i]);
 }

 getch();

}