//binary tree linked list implementation
#include<stdio.h>
#include<stdlib.h>
int count =0 ;

struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
 
/* newNode() allocates a new node with the given data and NULL left and 
   right pointers. */
struct node* newNode(int data)
{
  // Allocate memory for new node 
  struct node* node = (struct node*)malloc(sizeof(struct node));
 
  // Assign data to this node
  node->data = data;
 
  // Initialize left and right children as NULL
  node->left = NULL;
  node->right = NULL;
  return(node);
}

void preorder_traversal(struct node *node )
{
  if (node == NULL)
          return;
     printf("%d ", node->data);
     count = count +1;
     preorder_traversal(node->left);  
     preorder_traversal(node->right);
}    

height(struct node * root )
{
    if(root == NULL)
	   return 0 ;
    else{
   int l = height(root -> left );
  int r =   height(root -> right);
    
  if(l>r)
    return( l +1);
  else
	  return (r+1);
   }
}
int main()
{
  struct node *root = newNode(1);
  root->left  = newNode(2);
  root->right = newNode(3);
  root->left->left  = newNode(4);
  root->left->right   = newNode(5);
  root->right->left  = newNode(6);
  root -> right -> right = newNode(7);
  root->left->left->left = newNode(8);
  root->left->left->right = newNode(9);
  root->left->right->left = newNode(89);
  root->left->right->right = newNode(81);
  root -> right ->left->left = newNode(90);
  root -> right ->left->right = newNode(91);
  root ->right ->right ->left = newNode(93);
  root ->right ->right ->right  = newNode(100);
  printf("\nPreorder traversal of binary tree is \n");
  preorder_traversal(root);
  printf("\nno. of node = %d",count);
 printf("\nheight of tree = %d\n", height(root));  
  return 0;

}


