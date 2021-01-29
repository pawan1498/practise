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
// Prints max at first position, min at second position
// second max at third position, second min at fourth
// position and so on.
void rearrange(int *arr, int n)
{
    // initialize index of first minimum and first
    // maximum element
    int max_idx = n - 1, min_idx = 0;

    // store maximum element of array
    int max_elem = arr[n - 1] + 1;  // always greater than max element in array
    // traverse array elements
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += (arr[max_idx] % max_elem) * max_elem;
            max_idx--;
        }

        // at odd index : we have to put minimum element
        else
        {
            arr[i] += (arr[min_idx] % max_elem) * max_elem;
            min_idx++;
        }
    }

    // array elements back to it's original form
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] / max_elem;

        print_array(arr,n);  
    
}

int main()
{
    int N = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    // int crr[] = {1, 2, 3, 4, 5, 6};

    // int min_index = 0;
    // int max_index = N - 1;
    // int x=1;
    // //first sort array
    // for (int i = 0; i < N; i++)
    // {
    //     if (x)
    //     {
    //         arr[i] = crr[max_index];
    //         max_index--;
    //         x=0;
    //     }
    //     else
    //     {
    //         arr[i] = crr[min_index];
    //         min_index++;
    //         x=1;
    //     }
    //     print_array(arr,N);
    //     printf("\n");
    // }

    rearrange(&arr, N);
}
