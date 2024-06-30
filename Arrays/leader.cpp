#include <iostream>
#include <vector>
using namespace std;

void printLeaders(int arr[], int n) {
    vector<int> leaders;
    int maxFromRight = -1;
    
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            leaders.push_back(arr[i]);
            maxFromRight = arr[i];
        }
    }
    
    for (int i = leaders.size() - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
}

int main() {
    int arr[] = {4, 7, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}