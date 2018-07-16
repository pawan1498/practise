#include<stdio.h>
#include<stdlib.h>

struct node{
    int *data;
    struct node *next;
    struct node *prev;
};

struct node* push(struct node* head, int data)
{

    struct node* link = (struct node*) malloc(sizeof(struct node));
     struct node * current ;
    //printf("%d\n",temp);
    //printf("==%d\n",link);

    if(head == NULL)
    {
        link -> data = data;
        link -> next = NULL;
        link -> prev = NULL;
        head = link;



    }
    else
    {
        link -> data = data;
        link -> next = NULL;
        head -> next = link;
        link -> prev = head;
        head = link;
    }
    printf("=%d/n",head);
    return head;
}

void printList(head) {
    struct node* temp;
    temp = head;
    printf("\n[head] =>");
    //start from the beginning
    while(temp != NULL)
    {
        printf(" %d =>",temp->data);
        temp = temp->prev;
    }
    printf(" [null]\n");
}

int main()
{

    struct node *head=NULL;

    head = push(head, 1);
    head = push(head, 2);
    head = push(head, 3);
    head = push(head, 4);
    head = push(head, 5);

    printList(head);

}
