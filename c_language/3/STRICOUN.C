#include<stdio.h>
#include<conio.h>
void main()
{
 char a[5];
 int i,c=0;
 clrscr();
 for(i=0;i<5;i++)
 {
  scanf("%c",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("%c",a[i]);
  c++;
 }
 printf("\ncount=%d",c);

 getch();

}