// Given an array Arr of N integers arranged in a circular fashion. Your task is to find the minimum absolute difference between adjacent elements.


#include <stdio.h>
int main()
{
    int arr[] = {8, -8, 9, -9, 10, -11, 12};
    int n = 7;
    //for circular array
    int Arr[] = {8, -8, 9, -9, 10, -11, 12, arr[0]};
    int N = n + 1;

    int p = 8 - (-8);
    int mini_diff;
    int curr_diff;
    if (Arr[1] > Arr[0])
        mini_diff = (Arr[1] - Arr[0]);
    else
    {
        mini_diff = (Arr[0] - Arr[1]);
    }

    for (int i = 0; i < N - 1; i++)
    {

        if (Arr[i + 1] > Arr[i])
        {
            curr_diff = (Arr[i + 1] - Arr[i]);
        }
        else
        {

            curr_diff = (Arr[i] - (Arr[i + 1]));
        }

        if (curr_diff < mini_diff)
            mini_diff = curr_diff;
    }
    printf(" minimum adjacent diff in circular array = %d", mini_diff);
}