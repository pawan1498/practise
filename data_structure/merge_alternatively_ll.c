#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head1;
//    struct node *head1= NULL;
struct node *head2;
struct node *ptr = NULL;
struct node *result;
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
struct node* insert(struct node *head,int data)
{
    //create a link
    struct node *link = (struct node*) malloc(sizeof(struct node));

    //link->key = key;
    link->data = data;

    //point it to old first node
    link->next = head;
    head = link;

    return head ;
}

void merge(struct node *p, struct node **q)
{
     struct node *p_curr = p, *q_curr = *q;
     struct node *p_next, *q_next;

     // While therre are avialable positions in p
     while (p_curr != NULL && q_curr != NULL)
     {
         // Save next pointers
         p_next = p_curr->next;
         q_next = q_curr->next;

         // Make q_curr as next of p_curr
         q_curr->next = p_next;  // Change next pointer of q_curr
         p_curr->next = q_curr;  // Change next pointer of p_curr

         // Update current pointers for next iteration
         p_curr = p_next;
         q_curr = q_next;
    }

    *q = q_curr; // Update head pointer of second list
}

int main()
{
    struct node *head1= NULL;
//    struct node *head1= NULL;
    struct node *head2 = NULL;
    struct node *result = NULL;
    head1= insert(head1, 1);
    head1= insert(head1, 2);
    head1=insert(head1, 3);
    head2=insert(head2,4);
    head2=insert(head2, 5);
    head2=insert(head2, 6);

    printList(head1);
    printList(head2);

    merge(head1,&head2);
    printList(head1);
   // printList(head2);
}
