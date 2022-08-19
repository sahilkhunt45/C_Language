#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=50;i<=53;i++)
 {
   for(j=50;j<=i;j++)
   {
     printf("%d ",j);
   }
   printf("\n");
 }
 getch();

}