#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,count,number,n;
 clrscr();
 printf("enter a size of array:= ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
       printf("a[%d]=",i);
       scanf("%d",&a[i]);
  }
  printf("\nenter a number to find occurence:=  ");
  scanf("%d",&number);
count=0;
 for(i=0;i<n;i++)
  {
    if(a[i]==number)
     {
       count++;
     }
  }
  printf("\n %d occur %d times ",number,count);
getch();
}