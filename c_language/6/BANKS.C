#include<stdio.h>
#include<conio.h>
void main()
{
 int choice,choice1;
 clrscr();
 printf("press 1 for saving account\npress 2 for current account");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
   printf("press 1 for deposite\n");
   printf("press 2 for withdraw");
   scanf("%d",&choice1);

   switch(choice1)
   {
    case 1:
    printf("you are sucsessfully deposite");
    break;
    case 2:
    printf("you are sucsessfully withdraw");
    break;
   }
   break;
   case 2:
   printf("press 1 for deposite\n");
   printf("press 2 for withdraw");
   scanf("%d",&choice1);
  switch(choice1)
  {
    case 1:
    printf("you are sucsessfully deposite");
    break;
    case 2:
    printf("you are sucsessfully withdraw");
    break;
 }
  break;
 default:
 printf("fail");
}
    getch();

}