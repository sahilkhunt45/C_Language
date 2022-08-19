#include<stdio.h>
#include<conio.h>
void add(int [],int no);
void main()
 {
   int a[10],i,no;
   clrscr();
     printf("enter no:");
     scanf("%d",&no);
   for(i=0;i<no;i++)
    {
     printf("a[%d]=",i);
     scanf("%d",&a[i]);
    }
    add(a,no);
    getch();
 }
void add(int b[],int no)
 {
   int sum=0,i;

   for(i=0;i<no;i++)
   {
	sum=sum+b[i];
   }
   printf("sum=%d",sum);
 }



