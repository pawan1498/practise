
#include <stdio.h>
#include <stdlib.h>

struct node
 {
   int data;
   struct node *next;
 };

//display the list
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

//insert link at the first location
struct node *insert(struct node *head,int data)
 { struct node *current ;
   struct node *link = (struct node*)malloc(sizeof(struct node));
   link -> data = data ;
   link -> next = NULL;

   if(head == NULL)
   {
      head = link ;
   }

   if(current == NULL)
   {
      current = head ;
   }
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
  head = insert(head,10);
  insert(head, 20);
  insert(head,30);
  insert(head,1);
  insert(head,40);
  insert(head,56);
  insert(head,12);
  printf("linked list before swapping");
  printList(head);

  swap(head , 30 , 1);
  printf("linked list after swapping");
  printList(head);
}
swap(struct node *head, int x , int y)
{
  struct node *prev ,*currX,*currY;
  currX = head ;

  while(currX-> data != x)
  {
    prev  = currX;
    currX = currX -> next ;
    currY = currX -> next ;
  }
//printf("%d",p->data );
//printf("%d",q->data );
//printf("%d",r->data );


  currX -> next = currY -> next ;
  currY -> next = currX;
  prev ->  next = currY;
  return head;
}
