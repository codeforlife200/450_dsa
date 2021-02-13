#include <iostream>
using namespace std;
int min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {4, 7, 12, 4, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "the minimum value of array is : " << min(arr, size) << endl;
    cout << "the maximum value of array is : " << max(arr, size);
    return 0;
}