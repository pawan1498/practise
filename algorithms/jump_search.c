#include<stdio.h>
int search(int arr[],int high,int p);
int linear_search(int arr[],int result,int n,int q);
int main()
{

     int i, n, p;
     printf("enter the number of array=");   //number of element in array
     scanf("%d",&n);
     int arr[n] ;
     for(i=0; i<n; i++)                      //enter value in array
     {
         printf("arr[%d]=",i);
         scanf("%d",&arr[i]);
     }
   // int  arr[10]= {1,2,3,4,5,6,7,8,9,99};
    printf("enter the value for search=");
    scanf("%d",&p);
    int result= search(arr,n,p);
    (result == -1)? printf("Element is not present in array")
    : printf("Element is present at index %d",
             result);
    return 0;
}

int search(int arr[],int high,int p)
{
    int low, found_i = -1;
    for(int low=0; low<high; low=low+2)
    {
        if(arr[low] == p)
         return low;
        if(arr[low]>p)
        {
         return linear_search(arr,low-2,low,p);
            //found_i = linear_search(arr,low-2,low,p);
            //break;
        }

    }
      return -1;
    //return found_i;
}

int linear_search(int arr[],int i,int n,int p)
{
    int result;
    printf("%d - %d \n", i, n);

    for (result = i; result < n; result++)
    {
        if (arr[result] == p)
            return result;
    }
    return -1;
}


