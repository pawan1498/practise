#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void printList()
{
   struct node*temp;
   temp = head;
   printf("\n[head] =>");
   //start from the beginning
   while(temp != NULL)
   {
      printf(" %d =>",temp->data);
      temp = temp->next;
   }
   printf(" [null]\n");
}

//insert link at the first location
struct node *insert(int data)
{
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));

   //link->key = key;
   link->data = data;

   //point it to old first node
   link->next = NULL;

   if(head == NULL)
   {
      head = link;
   }

   if(current == NULL)
   {
      current = head;
   }
   else
   {
      //point first to new node
      current -> next = link;
      current = link;
   }
   return current ;
}

void delete_node(struct node *head,int data)
{
  struct node *prev= head;
  struct node *temp = head;

  if(head == NULL)
  {
   printf("list is empty");
   return ;
  }
  else
  {
    // iterate untill given node will not found
    while ( (temp -> data != data ) )
    {
      prev =  temp ;
      temp = temp -> next ;

    }
    // free given node
    free(temp);
    // linked previous node to the next node of deleted node
    prev-> next = temp -> next;
  }
}

int main()
{
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  insert(50);
  insert(60);
  insert(45);
  printList();

  delete_node(head,30);
  printList();
  return 0;

}


