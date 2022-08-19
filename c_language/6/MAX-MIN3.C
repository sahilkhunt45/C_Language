#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter a,b and c values");
 scanf("%d %d %d",&a,&b,&c);

 if(a<b)
 {
  if(a<c)
  {
   printf("a is small");
  }
  else
  {
   printf("c is small");
  }
 }
 if(b<c)
 {
  printf("b is small");
 }
 else
 {
  printf("c is small");
 }
 getch();
 }
