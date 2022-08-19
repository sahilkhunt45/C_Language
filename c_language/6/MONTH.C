#include<stdio.h>
#include<conio.h>
void main()
{
char j,f,m,a,M,u,J,A,s,o,n,d,choice;
clrscr();
printf("press j for january\n");
printf("press f for february\n");
printf("press m for march\n");
printf("press a for april\n");
printf("press M for May\n");
printf("press u for june\n");
printf("press J for June\n");
printf("press A for August\n");
printf("press s for september\n");
printf("press o for october\n");
printf("press n for november\n");
printf("press d for december\n");
scanf("%c",&choice);
if(choice=='j')
 {
  printf("january");
 }
 else if(choice=='f')
 {
  printf("february");
 }
 else if(choice=='m')
 {
  printf("march");
 }
 else if(choice=='a')
 {
  printf("april");
 }
 else if(choice=='M')
 {
  printf("May");
 }
 else if(choice=='u')
 {
  printf("june");
 }
 else if(choice=='J')
 {
  printf("July");
 }
 else if(choice=='A')
 {
  printf("Agust");
 }
 else if(choice=='s')
 {
  printf("september");
 }
 else if(choice=='o')
 {
  printf("october");
 }
 else if(choice=='n')
 {
  printf("november");
 }
 else if(choice=='d')
 {
  printf("december");
 }
else
{
 printf("Invalid choice");
}
getch();
}
