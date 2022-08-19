#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,n,j=0,max,min;
 clrscr();
 printf("enter a size of array:= ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   printf("a[%d]=",i);
   scanf("%d",&a[i]);
  }
 for(i=0;i<n;i++)
  {
   if(min<a[i])
    {
      min=a[i];
      j=i;
    }
  }
  max=0;
  for(i=0;i<n;i++)
  {
    if(i==j)
     {
      i++;
      i--;
     }
    else
    {
     if(max<a[i])
      {
       max=a[i];
      }
    }
  }
  printf("the second largest number is : %d\n\n",max);

  getch();
}