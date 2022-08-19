#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,sum=0;
 clrscr();
  for(i=0;i<5;i++)
 {
  printf("a[%d]= ",i);
  scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  sum=sum+a[i];
  printf("a[%d]=%d\n",i,a[i]);
 }
 printf("%d",sum);
 getch();
}