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

int min(int prices[], int n)
{
    int min = 100;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (prices[i] < min)
        {
            min = prices[i];

        cout<<min<<"";
        }
        else if (prices[i] > max)
        {
            max = prices[i];
        }
    }

    return max - min;
}

int main()
{
    int n = 5;
    int arr[n] = {7,6,4,3,1};
    // cout << "Maximum value is:" << max(arr, n) << endl;
    cout << "minimum value is:" << min(arr, n);

    return 0;
}