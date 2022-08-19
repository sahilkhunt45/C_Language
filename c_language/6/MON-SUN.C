#include<stdio.h>
#include<conio.h>
void main()
{
 char m,t,w,T,f,S,s,choice;
 clrscr();
 printf("press m for monday\n");
 printf("press t for tuesday\n");
 printf("press w for wednesday\n");
 printf("press T for thursday\n");
 printf("press f for friday\n");
 printf("press S for saturnday\n");
 printf("press s for sunday");
 scanf("%c",&choice);
 if(choice=='m')
 {
  printf("monday");
 }
else if(choice=='t')
 {
  printf("tuesday");
 }
else if(choice=='w')
 {
  printf("wednesday");
 }
else if(choice=='T')
 {
  printf("thuesday");
 }
else if(choice=='f')
 {
  printf("friday");
 }
else if(choice=='S')
 {
  printf("saturnday");
 }
else if(choice=='s')
 {
  printf("sunday");
 }
else
{
 printf("invalid choice");
}
getch();
}



















