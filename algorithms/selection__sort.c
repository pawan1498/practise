#include<stdio.h>
void selection_sort(int arr[],int num);
void swap(int *y , int *x);
int main()
{
  int num ;
  printf("enter the number of element\n");
  scanf("%d",&num);
  int arr[100];
  for(int i=0;i < num;i++)
   scanf("%d",&arr[i]);
  printf("array before sorting: \n");
  for(int k=0;k<num;k++)
   printf("%d ",arr[k]);
  selection_sort(arr,num);



}
void selection_sort(int arr[],int num)
{
  int mini;
  for(int j= 0;j<num;j++)
  {
    mini = j;
    for(int i =j+1;i< num;i++)
    {
      if(arr[mini] > arr[i])
     {
       swap(&arr[mini],&arr[i]);
     }
    }

  }
  printf("\narray after sorting:\n");
  for(int k=0;k<num;k++)
  printf("%d  ",arr[k]);
}
void swap(int *y , int *x)
{
  int temp;
  temp = *y ;
  *y = *x;
  *x = temp;
}
