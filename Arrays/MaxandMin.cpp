#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i];
    }
}

int max(int arr[], int n)
{
    int max = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int n)
{
    int min = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int n = 4;
    int arr[n] = {1, 10, 5, 4, 5};
    cout << "Maximum value is:" << max(arr, n) << endl;
    cout << "minimum value is:" << min(arr, n);

    return 0;
}