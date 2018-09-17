#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data ;
  struct node *leftChild ,*rightChild ;
};
struct node *insert(struct node *root ,int data) {
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

   //if tree is empty
   if(root == NULL) {
      root = tempNode;
   } else {
      current = root;
      parent = NULL;

      while(1) {
         parent = current;

         //go to left of the tree
         if(data < parent->data) {
            current = current->leftChild;
            //insert to the left

            if(current == NULL) {
               parent->leftChild = tempNode;
               return;
            }
         }  //go to right of the tree
         else {
            current = current->rightChild;

            //insert to the right
            if(current == NULL) {
               parent->rightChild = tempNode;
               return;
            }
         }
      }
   }
}
void preorder_traversal(struct node *node )
{
  if (node == NULL)
          return;
     printf("%d ", node->data);
     preorder_traversal(node->leftChild);
     preorder_traversal(node->rightChild);
}
void printInorder (struct node* node)
{
    if (node == NULL)
        return;
    printInorder(node->leftChild);
    printf("%d ", node->data);
    printInorder(node->rightChild);
}
int main()
{
  struct node *root= NULL;
  int data;
  root = insert(root,10);
  insert(root,5);
  insert(root,1);
  insert(root,7);
  insert(root,40);
  insert(root,50);
  insert(root,76);
  insert(root,90);
  insert(root,9);

preorder_traversal(root);
printInorder (root);

}
