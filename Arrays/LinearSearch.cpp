#include <iostream>
using namespace std;

bool LinerarSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        {
            if (arr[i] == key)
            {
                return 1;
            }
            
        }
    }
    return 0 ;
}

int main()
{
    int n = 5;
    int arr[n] = {1, 1, 5, 5, 10};
    bool found = LinerarSearch(arr, n, 0);
    if (found)
    {
        cout << "found";
    }
    else
        cout << "not found";

    return 0;
}