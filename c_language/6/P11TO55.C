#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=11;i<=55;i+=11)
 {
   for(j=1;j<=i;j+=11)
   {
     printf("%d ",i);
   }

   printf("\n");
 }
 getch();

}