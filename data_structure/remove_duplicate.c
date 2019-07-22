#include<stdio.h>
#include<stdlib.h>
struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

int main()
{
insert(12);
insert(19);
insert(12);
insert(19);
insert(13);
insert(13);
insert(12);
insert(18);
printlist();
remove_dups();
}
int insert( int data )
{
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

int printlist()
{ int x=0;
  struct node*temp;
  temp = head;
  printf("\n[head] =>");
//start from the beginning
  while(temp != NULL)
  {
    printf("%d =>",temp->data);
    temp = temp -> next ;
  }


  printf(" [null]\n");
}

remove_dups()
{
  current = head;
  struct node * runner ;
  while(current != NULL)
  {
    runner = current ;
    while(runner->next != NULL)
    {
      if(runner -> next -> data == current -> data )
      {
        runner -> next = runner -> next ->next;
      }
      else{
           runner = runner -> next ;
      }
    }
    current = current -> next ;

  }
  printlist();
}


























