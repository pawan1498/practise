#include <stdio.h>
int search(int arr[],int low,int high, int p);
int main(void)
{
	int arr[100];
    int n,i;
    int x;
    printf("enter the number of array=");   //number of element in array
    scanf("%d",&n);
    for(i=0;i<n;i++)                        //enter value in array
    {
      printf("arr[%d]=",i);
      scanf("%d",&arr[i]);
    }
    printf("enter the value for search=");
    scanf("%d",&x);
    int result = search(arr, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d",
                                                   result);

	return 0;
}
int search(int arr[],int low,int high,int p)
{   int mid;
    while(low<=high)
    {
      mid =low +(high - low )/2;
      if(arr[mid]==p)          //if searching element is present at mid index
        return mid;
      if(arr[mid]>p)           //if element is in left half so right half will not consider
        high=mid-1;            // therefore high ->mid-1

      else                     //similarly if it is in right half so left half will not consider
        low =mid +1;


    }
return -1;
}
