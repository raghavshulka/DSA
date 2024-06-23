#include <iostream>
using namespace std;
// o to n-1 array at last duplicate hai/..
int findDuplicateElement(int arr[], int n)
{
    int element = 0;
    int ans;
    for (int i = 0; i < n - 1; i++)
    {
        element = element ^ arr[i];
    };
    cout << element << endl;
    for (int i = 0; i < n; i++)
    {
        element = element ^ arr[i];
    }
    cout << element << endl;

    return element;
}

// unique no of occurance

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 1};
    int result = findDuplicateElement(arr, n);
    cout << "The duplicate element is: " << result << endl;
    return 0;
}