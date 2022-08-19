#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mult();
void divi();
void main()
{
 int choice;
 clrscr();
 printf("press 1 for additon:=\n");
 printf("press 2 for substiction:=\n");
 printf("press 3 for multiplication:=\n");
 printf("press 4 for division:=\n");
 scanf("%d",&choice);
 switch(choice)
 {
   case 1:
    add();
    break;
   case 2:
    sub();
    break;
   case 3:
    mult();
    break;
   case 4:
    divi();
    break;
   default:
   printf("invalid");
 }
getch();
}
void add()
{
  int a,b,c;
  printf("enter a and b value:= ");
  scanf("%d %d",&a,&b);
  c=a+b;
  printf("%d",c);
}
void sub()
{
  int a,b,c;
  printf("enter a and b value:= ");
  scanf("%d %d",&a,&b);
  c=a-b;
  printf("%d",c);
}
void mult()
{
  int a,b,c;
  printf("enter a and b value:= ");
  scanf("%d %d",&a,&b);
  c=a*b;
  printf("%d",c);
}
void divi()
{
  int a,b,c;
  printf("enter a and b value:= ");
  scanf("%d %d",&a,&b);
  c=a/b;
  printf("%d",c);
}




