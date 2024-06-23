#include <iostream>
using namespace std;

int findUniqueElement(int arr[], int n) {
    int element = 0;  // Initialize element to 0
    for (int i = 0; i < n; i++) {
        element = element ^ arr[i];
    }
    return element;  // Return the result
}

//unique no of occurance
//two time occurance no

int main() {
    int n = 7;  
    int arr[n] = {1, 1, 5, 5, 3, 3, 7};  
    int result = findUniqueElement(arr, n);
    cout << "The unique element is: " << result << endl;
    return 0;
}