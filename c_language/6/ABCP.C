#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n=65;
clrscr();
for(i=1;i<=5;i++)
{
 for(j=n;j<n+i;j++)
{
 printf("%c ",j);
}
printf("\n");
 n=n+i;
}
getch();
}