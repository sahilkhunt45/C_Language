#include<stdio.h>
#include<conio.h>
void main()
{
 int no,f,m,l,sum;
 clrscr();
 printf("Enter your value:=");
 scanf("%d",&no);
 m=no;
 no=no%10;
 l=no;

 while(m>10)
 {
 m=m/10;
 }
 f=m;
 sum=f+l;
 printf("%d",sum);
 getch();
}