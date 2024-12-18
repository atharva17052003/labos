#include <stdio.h>
#define MAX 10

	void lsearch(int list[],int n,int element)
   	{
        int i, flag = 0;
        for(i=0;i<n;i++)
        	if(  list[i] == element)
           {
             printf(" The element whose value is %d is present at position %d in list\n",element,i);
             flag =1;
             break;
           }
         if( flag == 0)
          printf("The element whose value is %d is not present in the list\n",element);
      }

  void readlist(int list[],int n)
	{
     int i;
     printf("Enter the elements\n");
     for(i=0;i<n;i++)
         scanf("%d",&list[i]);
    }

  void printlist(int list[],int n)
	{
     int i;
     printf("The elements of the list are: \n");
     for(i=0;i<n;i++)
         printf("%d\t",list[i]);
     }

 void main()
 {
   int list[MAX], n, element;
   printf("Enter the number of elements in the list max = 10\n");
   scanf("%d",&n);
   readlist(list,n);
   printf("\nThe list before sorting is:\n");
   printlist(list,n);
   printf("\nEnter the element to be searched\n");
   scanf("%d",&element);
   lsearch(list,n,element);
  }

