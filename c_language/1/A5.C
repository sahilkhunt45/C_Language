#include<stdio.h>
#include<conio.h>
void main()
{
int base_salary,HRA,DA,TA,Gross_salary;
clrscr();
base_salary=100;
HRA=(base_salary*10/100);
DA=(base_salary*5/100);
TA=(base_salary*8/100);
Gross_salary=base_salary+HRA+DA+TA;
printf("Gross_salary=%d",Gross_salary);
getch();

}