#include<stdio.h>
void hanoi(int n ,int a[], int b[] ,int c[]);
int top = -1 ;
int empty()
{
   if(top == -1)
      return 1;
   else
      return 0;
}

int full()
{

   if(top == 3)
      return 1 ;
   else
      return 0;
}
int pop(int stack[])
{
   int data;
   if(!empty())
   {
      data = stack[top];
      top = top - 1;
      return data;
   }
   else
   {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push(int data,int stack[])
{
   printf("*");
   if(!full())
   {
      top = top + 1;
      stack[top] = data;
   }
   else
   {
      printf("Could not insert data, Stack is full.\n");
   }
}
int main()
{
    int n = 3; // numbe4r of disk
    int a[3],b[3],c[3];
    //int top = -1 ;
    int k;
    printf("enter 3 element in descending order\n ");
    for(int i =0;i<3;i++)
    {
        scanf("%d",&k);
        printf("#");
        push(k,a);
    }
   // while(!empty())
    {
        //int data = pop(a);
        //printf("%d\n",data);
    }
    for(int i = 0 ; i<3 ;i++)
    printf("%d",a[i])   ;
    hanoi(n,a,b,c);
}

void hanoi(int n ,int a[], int b[] ,int c[])
{
    for(int i =0 ;i<n-1;i++)
    {
        int data = pop(a);
        if(a = empty())
        {
            push(data , b);
        }
    }




}

