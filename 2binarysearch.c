#include <stdio.h>
#define MAX 10

	void bsearch(int list[],int n,int element)
   	{
        int l,u,m;
        l = 0;
        u = n-1;
        while(l <= u)
         {
           m = (l+u)/2;
           if( list[m] == element)
           	{
            	printf(" The element whose value is %d is present at position %d in list\n",element,m);
            	//flag =1;
            	break;
            }
            else
            	if(list[m] < element)
               	  	l = m+1;
               else
               		u = m-1;
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
   bsearch(list,n,element);
  }
