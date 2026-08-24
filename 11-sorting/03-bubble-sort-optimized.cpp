#include <iostream>
#include <vector>
#include <utility> // for std::swap

using namespace std;

// Function to print vector elements
void printVector(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Optimized Bubble Sort (passes by reference to avoid copying)
void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> arr = {3, 1, 2, 5, 4};

    cout << "Original Array: ";
    printVector(arr);

    bubbleSort(arr);

    cout << "Sorted Array:   ";
    printVector(arr);

    return 0;
}