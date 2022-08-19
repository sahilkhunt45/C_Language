#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,no;
 clrscr();
 printf("Ener a,b");
 scanf("%d %d",&a,&b);
 printf("enter 1 for addition");
 printf("enter 2 for subtraction");
 printf("enter 3 for multiplication");
 printf("enter 4 for divition");
 scanf("%d",&no);
 if(no==1)
 {
  printf("%d",a+b);
 }
 else if(no==2)
 {
  printf("%d",a-b);
 }
  else if(no==3)
 {
  printf("%d",a*b);
 }
  else if(no==4)
 {
  printf("%d",a);
 }
  else
  {
   printf("error");
  }
getch();



}