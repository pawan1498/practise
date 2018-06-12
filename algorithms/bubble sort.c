#include<stdio.h>
int main()
{
    int i ,j, n,swap,arr[100];
    printf("enter the no of elements for sorting :");
    scanf("%d",&n);
    printf("enter elements");
     for(i=0;i<n;i++)
     {  printf("\narr[%d]:",i);
         scanf("%d",&arr[i]);
     }
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
for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
return 0;
}

