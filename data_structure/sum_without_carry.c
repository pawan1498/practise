#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *current=NULL;
struct node *result = NULL;
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

struct node *add(struct node *head1,struct node *head2)
{

    // check any of the two head pointers
    if (head1 == NULL)
        return NULL;

    int sum;

    // Allocate memory for sum node of current two nodes
    struct node* result = (struct node *)malloc(sizeof(struct node ));

    // Recursively add remaining nodes and get the carry
    result->next = add(head1->next, head2->next);

    // add digits of current nodes and propagated carry
    sum = head1->data + head2->data ;

    // Assigne the sum to current node of resultant list
    result -> data = sum;
    return result;

}
int main()
{
    struct node *head1= NULL;
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
    result = add(head1,head2);
    printList(result);
}
