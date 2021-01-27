// Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
#include <stdio.h>
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
        /* code */
    }
}
int main()
{
    int N = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int crr[] = {1, 2, 3, 4, 5, 6};

    int min_index = 0;
    int max_index = N - 1;
    int x=1;
    //first sort array
    for (int i = 0; i < N; i++)
    {
        if (x)
        {
            arr[i] = crr[max_index];
            max_index--;
            x=0;
        }
        else
        {
            arr[i] = crr[min_index];
            min_index++;
            x=1;
        }
        print_array(arr,N);
        printf("\n");
    }
    
    
}
