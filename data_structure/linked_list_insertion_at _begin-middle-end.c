
#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data ;
  struct node *next;
};
void printList(struct node *head)
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
struct node *insertion_B(struct node *head ,int item)
{
  struct node *new_node , *temp ;
  new_node = (struct node*)malloc(sizeof(struct
 node));
  new_node -> data = item;
  temp = head ;
  head = new_node;
  new_node -> next  = temp;
 // return head;
}


struct node *insertion_M(struct node *head ,int item)
{
  struct node *new_node , *temp ;
  new_node = (struct node*)malloc(sizeof(struct
 node));
 new_node -> data = item ;
   temp = head ;
   printf("enter the node data  after newnode will inserted ");
   int fuck ;
   scanf("%d",&fuck);


   while(temp->data   !=  fuck )
   {
     temp = temp->next ;
   }
   struct node *ptr ;
   ptr = temp -> next ;
   temp -> next = new_node;
   new_node -> next = ptr ;
   //return head ;
}

struct node *insertion_E(struct node *head ,int item)
{
  struct node *new_node , *temp ;
  new_node = (struct node*)malloc(sizeof(struct
 node));
  new_node -> data = item;
  new_node -> next = NULL;
  temp = head ;
  while(temp->next  !=  NULL)
  {
     temp = temp->next ;
  }
  temp -> next = new_node;
  return head ;
}


struct node *insert(struct node *head,int data)
 { struct node *current ;
   struct node *link = (struct node*)malloc(sizeof(struct node));
   link -> data = data ;
   link -> next = NULL;

   if(head == NULL)
   {head = link ;}

   if(current == NULL)
    {current = head ;}
   else
    {
      current -> next = link ;
      current = link ;
    }
  return current;
 }
 int main()
{ struct node *head ;
  struct node *current;
  head = insert(head,1);
  insert(head, 2);
  insert(head,3);
  insert(head,4);
  insert(head,5);
  insert(head,6);
  insert(head,7);
  printf("linked list ");
  printList(head);
  printf("\ninsertion at beggining");
  head = insertion_B(head ,100);
  printList(head);
  printf("\ninsertion at middle\n");
  insertion_M(head ,99);
  printList(head);
  printf("\ninsertion at end");
  insertion_E(head ,999);
  printList(head);
}


