#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (arr[middle] == x){
            return middle;
        }
        else if (arr[middle] < x){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }

    return -1;
}
int main() {
    int arr[] = {2, 3, 4, 10, 19, 22, 40, 50, 111, 120};
    int x = 111;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, n, x);

    if (result == -1){
        cout << "Element is not present in array" << endl;
    }
    else{
        cout << "Element is present at index " << result << endl;
    }

return 0; 
}
