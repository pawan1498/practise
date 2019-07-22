#include <stdio.h>
int main()
{
    int arr[]={-7,6,2,-4,3};
    for(int i=0;i<5;i++)
    {
       printf("arr[%d] = %d\t",i,arr[i]);
    }
  int index = eqm(arr,5);
  printf("\n eqm point = %d",arr[index]);
    return 0;
}
eqm(int arr[],int n)
{
    int lsum;
    int rsum;
  for(int i =0;i<n;i++)
  {
      lsum = 0;
      for(int j=0;j<i;j++)
      {
          lsum+=arr[j];
      }
      rsum= 0 ;
      for(int k =i+1;k<n;k++)
      {
         rsum+=arr[k];
      }
      if(lsum == rsum )
      {
          return i;
      }
  }
  return -1;
}

