#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],b[3][3],c[6][6],n,i,j,k;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
      {
	printf("a[%d][%d]=",i,j);
	scanf("%d",&a[i][j]);
      }
 }
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
      {
	printf("b[%d][%d]=",i,j);
	scanf("%d",&b[i][j]);
      }
 }
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
    {
     c[i][j]=0;
     for(k=0;k<n;k++)
      {
	c[i][j]=c[i][j]+a[i][k]*b[k][j];
      }
    }
 }
  for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)

      {
	printf("%d ",c[i][j]);
      }

    printf("\n");
 }
 getch();
}