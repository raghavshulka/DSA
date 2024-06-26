#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> unionArr;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (i > 0 && arr1[i] == arr1[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && arr2[j] == arr2[j - 1])
        {
            j++;
            continue;
        }

        if (arr1[i] < arr2[j])
        {
            unionArr.push_back(arr1[i]);
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            unionArr.push_back(arr2[j]);
            j++;
        }
        else
        {
            unionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements of arr1, if any
    while (i < n)
    {
        if (i == 0 || arr1[i] != arr1[i - 1])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    // Add remaining elements of arr2, if any
    while (j < m)
    {
        if (j == 0 || arr2[j] != arr2[j - 1])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    return unionArr;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> unionResult = findUnion(arr1, arr2, n, m);

    cout << "Union of the two arrays: ";
    for (int num : unionResult)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}