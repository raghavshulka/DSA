#include <iostream>
using namespace std;

void zeroOfArr(int arr[], int n)
{
    int j = -1;
    for (int k = 0; k < n; k++)
    {
        if (arr[k] == 0) // Corrected condition
        {
            j = k;
            break;
        }
    }

    if (j == -1)
        return;

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int n = 10;
    int arr[n] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    zeroOfArr(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Changed to print on one line
    }
    cout << endl;
    return 0;
}