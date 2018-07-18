#include<stdio.h>
#include<stdlib.h>
// define stack
struct stack
{
  int top;
  int *array ;
  unsigned capacity;

};
// fuction fro cerate stack
struct stack * create_stack(unsigned capacity)
{
  struct stack *stack= (struct stack*)malloc(sizeof(struct stack ));
  stack -> capacity = capacity;
  stack -> top = -1;
  stack -> array = (int*)malloc(stack -> capacity* sizeof(int ));
}
// full condition
//int full(struct Stack* stack)
//{   return stack -> top == stack -> capacity - 1; }
int full(struct stack *stack)
{
  return stack -> top == stack -> capacity -1;
}
// empty condition
int empty(struct stack *stack)
{
  return stack -> top == -1;
}


// push data into stack
void push(struct stack *stack,int data)
{
  if(full(stack))
  {
    printf("stack is full\n");
  }
  else

    stack ->array[++stack -> top] = data;
    printf("%d push to stack\n",data);
}

//pop data from satck
int pop(struct stack *stack)
{
  if(empty(stack))
   return 0;
  else
   return stack -> array[stack -> top--];
}
int main()
{
struct stack *stack= create_stack(100);
push(stack ,1);
push(stack ,2);
push(stack ,3);
push(stack ,4);
push(stack ,5);
push(stack ,6);

printf("%d is poped from stack",pop(stack));
}
