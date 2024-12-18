#include <stdio.h>
#define MAX 10
/* a function to build an adjacency matrix of the graph*/
void buildadjm(int adj[][MAX], int n)
   {
     int i,j;
     for(i=0;i<n;i++)
         for(j=0;j<n;j++)
         {
         printf("Enter 1 if there is an edge from %d to %d, otherwise enter 0 \n",i,j);
         scanf("%d",&adj[i][j]);
         }
  }

/* a function to compute out-degree of a node*/
int outdegree(int adj[][MAX],int x,int n)
    {
       int i, count =0;
       for(i=0;i<n;i++)
           if( adj[x][i] ==1) count++;
      return(count);
    }

/* a function to compute in-degree of a node*/
int indegree(int adj[][MAX],int x,int n)
    {
       int i, count =0;
       for(i=0;i<n;i++)
           if( adj[i][x] ==1) count++;
      return(count);
    }

void main()
   {
     int adj[MAX][MAX],node,n,i;
     printf("Enter the number of nodes in graph maximum = %d\n",MAX);
      scanf("%d",&n);
     buildadjm(adj,n);
     for(i=0;i<n;i++)
     {
        printf("The indegree of the node %d is %d\n",i,indegree(adj,i,n));
        printf("The outdegree of the node %d is %d\n",i,outdegree(adj,i,n));
   }
}


