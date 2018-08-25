#include<stdio.h>
//int arr[10];
void insertion(int num,int arr[]);
int main()
{  int arr[10];
  int num=4;
  printf("enter number element in array\n ");
  scanf("%d",&num);
  printf("enter elements in array");
  for(int i=0;i<=num;i++)
  {
    scanf("%d",&arr[i]);
    printf("arr[%d]= %d \n",i,arr[i]);

  }
  //insert element at 3 position.
  for(int i=0;i<=num;i++)
  {
    printf("%d\n",arr[i]);
  }
  insertion(num,arr);
}
void insertion(int num, int arr[])
{ int position,data;
  printf("enter position and data u have to put element");
  scanf("%d\n%d",&position,&data);
  for(int j= num;j>=position;--j)
  {
    arr[j+1]= arr[j];
  }
  arr[position]=data;
  num = num +1;
  for(int k=0;k<=num;k++)
  {
    printf("%d\n",arr[k]);
  }
}

