#include <iostream>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
    int temp;
    int n = end;
    while (start < end)
    {
        temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, 0, size - 1);
    return 0;
}