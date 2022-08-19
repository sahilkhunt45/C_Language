#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,n,sum=0;
 clrscr();
 printf("Enter value:=");
 scanf("%d",&n);
 do
 {
  printf("%d",i);
  sum=sum+i;
  i++;
 }while(i<=n);
 printf("%d",sum);
 getch();
}