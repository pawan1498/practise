#include<stdio.h>
#include<stdlib.h>

struct Queue
{
   int front, rear , size ;
   unsigned capacity;
   int* array ;
};
struct Queue *create_list(unsigned capacity)
{
   struct Queue *queue =(struct Queue*)malloc(sizeof(struct Queue));
   queue -> capacity = capacity ;
   queue -> size = 0;
   queue -> front =0 ;
   queue -> rear = capacity -1 ;
   queue -> array = (int*)malloc(sizeof(int));
   return queue;
}

int full (struct Queue *queue )
{
   return queue -> rear == queue -> capacity ;
}
void enqueue(struct Queue *queue,int data )
{
   if( full(queue))
   return;
   queue -> rear = (queue -> rear + 1)%queue -> capacity ;
   queue -> size = queue -> size +1;
   queue -> array[queue -> rear ] = data ;
   printf("%d enqueue\n ",data );
}

int empty (struct Queue *queue)
{
   return queue -> size == 0;
}
int dequeue(struct Queue *queue)
{
   if (empty(queue))
   return;

   int data = queue -> array[queue -> front];
   queue -> front = (queue -> front +1)%queue -> capacity ;
   queue ->size = (queue -> size -1);
   return data ;
}
int main()
{
   struct Queue *queue ;
   queue = create_list(100);
   enqueue(queue ,1);
   enqueue(queue ,2);
   enqueue(queue ,3);
   enqueue(queue ,4);
   enqueue(queue ,5);
   enqueue(queue ,6);
   enqueue(queue ,7);

   printf("\n%d dequeue from list",dequeue(queue));
}

