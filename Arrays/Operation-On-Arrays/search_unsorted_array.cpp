
//Time Complexity: O(n)
//Space Complexity: O(1)

//Its a simple linear search algorithm to find the index of a target element in an unsorted array.
//If the element is found, it returns the index; otherwise, it returns -1.
//Iterates through each element of the array and compares it with the target one by one.
#include <bits/stdc++.h>
using namespace std;

int searchInUnsortedArray(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) 
        if(arr[i] == target)
            return i;
    return -1;
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    cout<<"Element found at index: " << searchInUnsortedArray(arr, n, target) << endl;
    return 0;
}