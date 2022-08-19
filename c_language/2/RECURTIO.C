#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
 int n,ans;
 clrscr();
 printf("enter n value:=\n");
 scanf("%d",&n);
 ans=fact(n);
 printf("your factorial=%d",ans);
 getch();
}
int fact(int b)
{
  if(b==0)
  {
   return 1;
  }
  else
  {
   return b*fact(b-1);
  }
 }
