#include<stdio.h>
#include<conio.h>
void main()
 {
  void read(int *,int);
  void dis(int *,int);
  int a[5],i,sum=0;

  clrscr();
  printf("Enter the elements of list \n");
  read(a,5);      /*read the list*/
  printf("The list elements are  \n");
  dis(a,5);
  for(i=0;i<5;i++)
   {
	sum+=a[i];
   }
  printf("The sum of the elements of the list  is %d\n",sum);
  getch();
 }

 void read(int c[],int i)
  {
   int j;
   for(j=0;j<i;j++)
	scanf("%d",&c[j]);
   fflush(stdin);
  }

  void dis(int d[],int i)
  {
   int j;
   for(j=0;j<i;j++)
	printf("%d  ",d[j]);
	printf("\n");
  }
