
// C++ program to implement recursive Binary Search 
  
#include <bits/stdc++.h> 
using namespace std; 
  
// Recursive Binary Search function to find the index of an 
// element 'x' in a sorted array 'arr' if elements is present, otherwise it return -1 
  
// first: The index of the first element in the current sub-array
// end: The index of the last element in the current sub-array 
int binarySearch(int arr[], int first, int end, int x) 
{ 
    // Base case: If the search space becomes empty, the element is not present in the array 
    if (end >= first) { 
        // Calculate the middle index to divide the search space in half 
        int middle = first + (end - first) / 2; 
  
        // If the middle element is equal to 'x', we have found the element, return its index 
        if (arr[middle] == x) 
            return middle; 
  
        // If the middle element is greater than 'x', search in the left half of the array 
        if (arr[middle] > x) 
            return binarySearch(arr, first, middle - 1, x); 
  
        // If the middle element is less than 'x', search in the right half of the array 
        return binarySearch(arr, middle + 1, end, x); 
    } 
  
    // If the base case is reached, the element is not present in the array, return -1 
    return -1; 
} 
  
// Driver code 
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 19, 22, 40, 50, 111, 120 }; 
  
    // Element to be searched 
    int x = 111; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) 
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result; 
  
    return 0; 
}

