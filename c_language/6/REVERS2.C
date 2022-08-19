#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=4;i>=1;i--)
 {
   for(j=4;j>=i;j--)
   {
     printf("%d ",i);
   }
   printf("\n");
 }
 getch();

}