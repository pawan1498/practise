
#include<stdio.h>

int main()
{
    int i,j,num,temp;
    int arr[10];
    printf("enter the number of element n=");
    scanf("%d",&num);
    printf("enter the element in array\n");

    // enter the elements in array
    for(i=0; i<num; i++)
    {
        scanf("\n%d",&arr[i]);
        printf("arr[%d]=%d\n",i,arr[i]);
    }

    // sorting array with insertion sort
    for(i=1; i<num; i++)
    {
        temp=arr[i];                   //reference variable
        j=i-1;
        while((temp < arr[j]) && (j >= 0))    // loop for  checking which element is less than reference element
        {
            arr[j+1]=arr[j];               // moving array element with adjacent position until reach at check point
            j--;
        }
        arr[j+1]=temp;                 //insert temp at correct position
    }

    // print array in ascending order
    printf("\n ascending order of arr is\n ");

    for(i=0; i<num; i++)
        printf("%d\n",arr[i]);
}




