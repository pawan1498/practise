// Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].
#include <stdio.h>
int max_index(int arr[], int n)
{
    int max_index = -1;
    for (int j = n - 1; j > 0; j--)
    {
        // get all set whose sum is i
        for (int i = 0; i < n; i++)
        {
            {
                if (arr[i] < arr[j] && (max_index < j-i))
                {

                    max_index = j - i;
                }
            }
        }
    }
    return max_index;
}

int main()
{
    int N = 10;
    int A[] = {9, 2, 3, 4, 5, 6, 7, 8, 18, 0};
    printf("%d", max_index(A, N));
}