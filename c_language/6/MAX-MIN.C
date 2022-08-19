#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter a and b values");
scanf("%d %d",&a,&b);
if(a>b)
{
  printf("a is big\n");
  printf("a=%d",a);
}
else
{
 printf("b is big\n");
 printf("a=%d",b);
}
getch();


}