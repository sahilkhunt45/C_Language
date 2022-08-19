#include<stdio.h>
#include<conio.h>
#include<string.h>
//remove duplicate value:=
void main()
{
 char a[500];
 int i,j,k,l;
 clrscr();
 printf("Enter string = ");
 gets(a);
 l=strlen(a);
 for(i=0;i<l;i++)
 {
   for(j=i+1;j<l;j++)
   {
     if(a[i]==a[j])
     {
      for(k=j;k<l;k++)
      {
	 a[k]=a[k+1];
      }
      l--;
     }
   }
 }
 for(i=0;i<l;i++)
 {
    printf("%c",a[i]);
 }
getch();
}