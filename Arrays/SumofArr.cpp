#include <iostream>
using namespace std;

int sumOfArr(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        {
            sum = sum + arr[i];
        }
    }
    return sum;
}

int main()
{
    int n = 5;
    int arr[n] = {1, 1, 5, 5, 5};
    cout << "sum of  value is:" << sumOfArr(arr, n);

    return 0;
}