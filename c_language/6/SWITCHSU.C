#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,choice;

 clrscr();
 printf("press 1 for addition\n");
 printf("press 2 for subtraction\n");
 printf("press 3 for multiplication\n");
 printf("press 4 for divition");
 scanf("%d %d",&a,&b);
 scanf("%d",&choice);
 switch(choice)
 {
   case 1:
    printf("%d",a+b);
    break;
   case 2:
    printf("%d",a-b);
    break;
   case 3:
    printf("%d",a*b);
    break;
   case 4:
    printf("%d",a/b);
    break;
   default:
    printf("invalid");
 }
 getch();
}