#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d;
 clrscr();
 printf("Enter a,b,c and d");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 if(a<b && a<c && a<d)
 {
  printf("a is min");
 }
 else if(b<c && b<d)
 {
  printf("b is min");
 }
 else if(c<d)
 {
  printf("c is min");
 }
 else
 {
  printf("d is min");
 }
 getch();
}