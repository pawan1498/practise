#include<stdio.h>
#define n 7
//#define SUM 7
int main()
{

    int sum =0 ;
    int arr[] = {1,4,0,0,3,10,5};
    int x = 17;
    int i =  pick(arr,x);

}
pick(int arr[],int x)
{
    int sum =0;
    int i = 0 ;
    int j =0;
    while( i<7)
    {
        sum = 0 ;
        for(j=i; j<7; j++)
        {
            if(sum < x)
                sum = sum + arr[j];
            if(sum == x)
            {
                printf("i= %d\t",i);
                printf("j= %d\n",j);
                for(int k =i; k<=j; k++)
                    printf("%d\t",arr[k]);
                return i;
            }

        }
        i++;

    }
}
