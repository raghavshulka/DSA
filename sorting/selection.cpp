#include <iostream>
using namespace std;

int array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int selectionSorting(int arr[], int n)
{
    int temp[n] ;
    for (int i = 0; i < n; i++)
    {
        if (temp[i] < arr[i])
        {
           swap(temp[i],arr[i]);

        }
    }
    array(temp,n);
}

int main()
{
    int m = 5;
    int arr[m] = {1, 2, 20, 4, 10};
    selectionSorting(arr, m);

    return 0;
}