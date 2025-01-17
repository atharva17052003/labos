#include <stdio.h>
   #define MAX 10 /* The maximum size of the queue */
   #include <stdlib.h>

   void insert(int queue[], int *rear, int front, int value)
   	{
      *rear= (*rear +1) % MAX;
       if(*rear == front)
       	 {
         	printf("The queue is full can not insert a  value\n");
        		exit(0);
        	 }
           queue[*rear] = value;
        
       }

   void delete(int queue[], int *front, int rear, int * value)
   	{
       if(*front == rear)
       {
         printf("The queue is empty can not delete a  value\n");
        	exit(0);
        }
        	*front = (*front + 1) % MAX;
         *value = queue[*front];
       }

   void main()
   	{
        int queue[MAX];
        int front,rear;
        int n,value;
        front=0; rear=0;
      do
      {

        do
        {
          printf("Enter the element to be inserted\n");
          scanf("%d",&value);
          insert(queue,&rear,front,value);
          printf("Enter 1 to continue\n");
          scanf("%d",&n);
        } while(n == 1);
        
        printf("Enter 1 to delete an element\n");
        scanf("%d",&n);
          while( n == 1)
          {
          	    delete(queue,&front,rear,&value);
                printf("The value deleted is %d\n",value);
          		 printf("Enter 1 to delete an element\n");
                scanf("%d",&n);
          }
        printf("Enter 1 to continue\n");
        scanf("%d",&n);
      } while(n == 1);
   }

