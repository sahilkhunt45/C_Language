#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},i;
 clrscr();
 for(i=0;i<5;i++)
 {
  printf("a[%d]=%d\n",i,a[i]);
 }
 for(i=0;i<5;i++)
 {
    printf("b[%d]=%d\n",i,b[i]);
 }
 getch();
}