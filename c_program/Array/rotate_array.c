// Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction.
#include <stdio.h>
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
        /* code */
    }
}

void rotate(int arr[], int n, int d)
{
    int temp;
    while (d--)
    {
        temp = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
    print_array(arr, n); //after rotating
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;
    print_array(arr, n);  //original array 
    printf("\n");
    rotate(arr, n, d);
}
