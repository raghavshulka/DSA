#include <iostream>
using namespace std;

int rotOfArr(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    rotOfArr(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}