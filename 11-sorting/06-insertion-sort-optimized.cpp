// INSERTION SORT APPROACH
// Time Complexity : O(n^2)
// Space Complexity : O(1)

#include <iostream>
#include <vector>
using namespace std;

// Function to print the elements of the vector
void printArray(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

// Optimized Insertion Sort using the shift method
void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int temp = arr[i]; // Pick the element to insert
        int j = i - 1;

        // Shift elements greater than temp one position to the right
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place temp at its correct sorted position
        arr[j + 1] = temp;
    }
}

int main() {
    vector<int> arr = {5, 4, 1, 3, 2};

    cout << "Original Array: ";
    printArray(arr);

    insertionSort(arr);

    cout << "Sorted Array:   ";
    printArray(arr);

    return 0;
}