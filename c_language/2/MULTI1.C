#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b,no,mul;
clrscr();
printf("enter the value of number:-");
scanf("%d",&no);
 while(a<=no)
 {
  b=1;
   while (b<=10)
    {
      mul=a*b;
      printf("%d*%d=%d\n",a,b,mul);
      b++;
    }
  printf("\n");
  a++;
 }
getch();
}
