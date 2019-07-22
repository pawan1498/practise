

#include <stdio.h>
//int n =9;
int main()
{   int t;
scanf("%d",&t);
while(t--)
{

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ; i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
     printf("\n");
     bubblesort(arr,n);

 int maj = find(arr , n);
 printf("\n%d",maj);

}

    return 0;
}
bubblesort(int arr[],int n)
{
        int i ,j,swap;

 //   printf("enter elements");
        for(j=0;j<(n);j++)

    {
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=swap;
            }


        }
    }

return arr;
}int check(int maj , int count,int n)
{
    if(count > n/2 )
    {
       // printf("maj_element = %d",maj);
        return 1;
    }
return 0;

}
int find(int arr[], int n)
{
    int maj = 0 ,count = 0;
    for(int i= 0 ; i<n;i++)
    {
        if(arr[maj] == arr[i])
        {
            count ++;
            if(check(arr[maj],count,n))
            {
              return arr[maj];
            }
                      //  printf("arr[maj]=%d\t maj = %d \t count = %d\n",arr[maj],maj,count);

        }
        else
        {
            maj=i;
            count =1;
        }
    }
  //  printf("\n ***%d\n",count);
  return -1;
}

