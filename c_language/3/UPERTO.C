#include<stdio.h>
#include<conio.h>
void main()
{
 char a[5];
 int i;
 clrscr();
 printf("uper to lower case:= \n");
 for(i=0;i<5;i++)
 {
  scanf("%c",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("%c",a[i]+32);
 }
 getch();
}