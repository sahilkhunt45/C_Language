#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void insert(int[],int);
void delet(int[],int);
void reverse(int[],int);
void update(int[],int);
void swiss(int[],int);

void main()
{
 int a[10],n,i,pos,val,choice;
 clrscr();
 P("enter value of n-");
 S("%d",&n);

 for(i=0;i<n;i++)
    {
     P("Enter the value of a[%d]=",i);
     S("%d",&a[i]);
     }
  swiss(a,n);

  getch();
 }

 void swiss(int b[10],int n)
 {
  int choice,pos,val;

  P("\nPress 1 for insert array");
  P("\nPress 2 for delete array");
  P("\nPress 3 for reverse array");
  P("\nPress 4 for update array");
  P("\nEnter Your Choice=");
  S("%d",&choice);

  switch(choice)
	{
	 case 1:
		insert(b,n);
		break;
	 case 2:
		delet(b,n);
		break;
	 case 3:
		reverse(b,n);
		break;
	 case 4:
	       update(b,n);
	       break;
	 default:
		P("\nInvalid Choice");
		break;
	 }
  }

 void insert(int b[10],int n)
 {
  int i,pos,val;
  P("\nEnter position you want to insert=");
  S("%d",&pos);
  P("\nEnter Value you want to insert=");
  S("%d",&val);

  for(i=n-1;i>=pos;i--)
     {
      b[i+1]=b[i];
      }
  b[pos]=val;
  n++;

  for(i=0;i<n;i++)
     {
      P("\na[%d]=%d",i,b[i]);
      }

  }

 void delet(int b[10],int n)
 {
  int i,pos;
  P("\nEnter Position You want to delete=");
  S("%d",&pos);

  for(i=pos;i<=n-1;i++)
     {
      b[i]=b[i+1];
      }
  n--;
  for(i=0;i<n;i++)
     {
      P("\na[%d]=%d",i,b[i]);
      }
  }

  void reverse(int b[10],int n)
  {
   int i,j,swap;

   for(i=0,j=n-1;i<n/2;i++,j--)
      {
       swap=b[i];
       b[i]=b[j];
       b[j]=swap;
       }

  for(i=0;i<n;i++)
     {
      P("\na[%d]=%d",i,b[i]);
      }
  }

 void update(int b[10],int n)
   {
    int i,pos,val;
    P("\nEnter Position You want to update=");
    S("%d",&pos);
    P("\nEnter Value You want to update=");
    S("%d",&val);

    b[pos]=val;

    for(i=0;i<n;i++)
       {
	P("\na[%d]=%d",i,b[i]);
	}
    }