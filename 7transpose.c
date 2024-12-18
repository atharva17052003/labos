#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 3

void main()
 {
  void read(int a[][COL],int,int);
  void dis(int a[][COL],int,int);
  void trans(int a[][COL],int,int);
 int a[3][3];
 clrscr();
 read(a,ROW,COL);
  printf("\nThe matrix is \n");
  dis(a,ROW,COL);
 trans(a,ROW,COL);
 printf("The Tranpose of the matrix is\n");
 dis(a,ROW,COL);
 getch();
 }
 void read(int c[3][3] ,int i ,int k)
  {
   int j,l;
   printf("Enter the array \n");
   for(j=0;j<i;j++)
	for(l=0;l<k;l++)
	scanf("%d",&c[j][l]);
   fflush(stdin);
  }
  void dis(int d[3][3 ],int i,int k)
  {
   int j,l;
   for(j=0;j<i;j++)
   {
		for(l=0;l<k;l++)
		 printf("%d  ",d[j][l]);
	 printf("\n");
   }
  }
  void trans(int mat[][3],int k ,int l)
  {
	  int i,j,temp;
	  for(i=0;i<k;i++)
	   for(j=i+1;j<l;j++)
		{
		  temp=mat[i][j];
		  mat[i][j]=mat[j][i];
		  mat[j][i]=temp;
	}
  }
