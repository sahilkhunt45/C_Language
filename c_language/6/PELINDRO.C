#include<stdio.h>
#include<conio.h>
void main()
{
 int no,sum=0,i,m;
 clrscr();
 printf("Enter your value:= ");
 scanf("%d",&no);
 i=no;
 while(no>0)
 {
  m=no%10;
  sum=sum*10+m;
  no=no/10;

 }
 if(i==sum)
 {
  printf("pelindrom");
 }
 else
 {
  printf("not pelindrom");
 }
 // printf("%d",sum);
 getch();
}