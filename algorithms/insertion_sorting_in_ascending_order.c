#include<stdio.h>
int main()
{
  int i,j,n,k;
  int arr[10];
  printf("enter the number of element n=");
  scanf("%d",&n);
  printf("enter the element in array\n");

// enter the elements in array
   for(i=0;i<n;i++)
{
     scanf("\n%d",&arr[i]);
     printf("arr[%d]=%d\n",i,arr[i]);
}

// sorting the array with insertion sorting
   for(i=1;i<n;i++)
{
    k=arr[i];
    j=i-1;
    while( k<arr[j] && j>=0 )
   {
    arr[j+1]=arr[j];
    j--;
   }
   arr[j+1]=k;

}
// printing the array in descending order
printf("\n descending order of arr is\n ");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
}




