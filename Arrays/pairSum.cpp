#include <iostream>
using namespace std;

void pairsumOfArr(int arr[], int n, int targetSum)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == targetSum)
            {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }
}

void tripletsumOfArr(int arr[], int n, int targetSum)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int
                     k = j + 1;
                 k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == targetSum)
                {
                    cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
                }
            }
        }
    }
}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int targetSum = 5;

    // cout << "Pairs with sum " << targetSum << ":" << endl;
    // pairsumOfArr(arr, n, targetSum);
    cout << "triplet with sum " << targetSum << ":" << endl;
    tripletsumOfArr(arr, n, 8);

    return 0;
}