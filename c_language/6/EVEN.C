#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1;
 clrscr();
 while(i<=10)
 {
 if(i%2==0)
 {
   printf("%d\n",i);
 }
 else
 {
  printf("%d\t",i);
 }

  i++;
 }
 getch();
}