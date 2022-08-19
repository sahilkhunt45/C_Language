#include<stdio.h>
#include <conio.h>
#include<string.h>
void main()
{
  char a[20];
  int freq[200]={0},i;
  clrscr();
  printf("\n Please Enter any String :  ");
  gets(a);
   for(i=0;a[i]!='\0';i++)
    {
      freq[a[i]]++;
    }
   for(i=0;i<200;i++)
    {
      if(freq[i]!= 0)
       {
	 printf("Character '%c' Occurs %d Times \n", i, freq[i]);
       }
    }
  getch();
}