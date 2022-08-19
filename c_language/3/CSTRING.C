#include<stdio.h>
#include<conio.h>
//#include<string.h>
void main()
{
 char a[5],b[5];
 int i;
 clrscr();
 printf("string A:\n");
 for(i=0;i<5;i++)
 {
 scanf("%c",&a[i]);
 }
 for(i=0;i<5;i++)
 {
   b[i]=a[i];
 }
 printf("string B:\n");
 for(i=0;i<5;i++)
 {
  printf("%c",b[i]);
 }
 getch();

}