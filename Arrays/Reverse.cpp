#include <iostream>
using namespace std;

// int reverseOfArr(int arr[], int n)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         {
//             arr[i];
//         }
//         cout << arr[i];
//     }
// } Because it does not change actual array

void reverseOfArr(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void reverseOfArrAlternate(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end -= 2;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 10;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverseOfArr(arr, n);
    cout << "Full reverse: ";
    printArr(arr, n);

    cout << "Alternate reverse: ";
    reverseOfArrAlternate(arr, n);
    printArr(arr, n);

    return 0;
}