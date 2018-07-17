#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void printList(struct node *node)
{
   struct node*temp;
   temp = node;
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
void insert(int data) {
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
}
struct node*  reverse(struct node *node)
 {
  struct node *prev=NULL;
  struct node *curr= node;
  struct node *nxt=NULL;

  while(curr != NULL)
  {
    printf("%d\n",curr->data);
    nxt=curr->next;
    curr->next =prev;
    prev=curr;
    curr=nxt;
  }

  return prev;
 }

int main() {

  insert(10);
  insert(20);
  insert(30);
  insert(40);
  insert(50);
  insert(60);

printList(head);
head = reverse(head);
printList(head);
return 0;
}
