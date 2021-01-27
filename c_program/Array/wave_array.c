// sort array in wave like structure
#include <stdio.h>
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
        /* code */
    }
}
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void wave(int arr[], int n)
{
    for (int i = 0; i < n - 1; i = i + 2)
    {
        printf("%d", i);
        swap(&arr[i], &arr[i + 1]);
    }
    print_array(arr, n);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    wave(arr, n);
}