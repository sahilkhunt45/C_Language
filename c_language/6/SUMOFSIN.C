#include<stdio.h>
#include<conio.h>
void main()
{
 int no,sum=0,i;
 clrscr();
 printf("Enter your value:= ");
 scanf("%d",&no);
 while(no!=0)
 {
  i=no%10;
  sum=sum+i;
  no=no/10;

 }
  printf("%d",sum);
 getch();
}