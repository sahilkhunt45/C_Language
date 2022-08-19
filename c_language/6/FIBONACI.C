#include<stdio.h>
#include<conio.h>
void main()
{
 int s,s1,s2,i=1;
 clrscr();
 s=0;
 s1=1;
 printf("%d %d",s,s1);

 while(i<=5)
 {
  s2=s+s1;
  printf("%d  ",s2);
  s=s1;
  s1=s2;

  i++;
 }

 getch();

}