void inorder(struct tnode *p)
{
 struct tnode *stack[100];
 int top;
 top = -1;
if(p != NULL)
 {
    top++;
    stack[top] = p;
    p = p->lchild;
    while(top >= 0)
       {
          while ( p!= NULL)/* push the left child onto stack*/
           {
   	   top++;
                stack[top] =p;
	    p = p->lchild;
   	}
           p = stack[top];
   	top--;
printf(“%d\t”,p->data);
	p = p->rchild;
	if ( p != NULL) /* push right child*/
	  	{
		   top++;
                           stack[top] = p;
		    p = p->lchild;
         		}
	}
  }
}
//function for preorder traversal of a binary tree:

void preorder(struct tnode *p)
    {
       if(p != NULL)
         {
printf(“%d\t”,p->data);
            preorder(p->lchild);
preorder(p->rchild);
          }



//function for postorder traversal of a binary tree:

void postorder(struct node *p)
    {
       if(p != NULL)
         {
 postorder(p->lchild);
	 postorder(p->rchild);
printf(“%d\t”,p->data);
          }

