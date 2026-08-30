// Question 2 : LeetCode 11 - Container With Most Water
// Given n non-negative integers a1, a2, ..., an where each represents a point at coordinate (i, ai).
// n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0).
// Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.
//
// Approach 1 : Brute Force
// Time Complexity  : O(n^2)
// Space Complexity : O(1)
//
// Approach 2 : Two Pointers (Optimal)
// Time Complexity  : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Approach 1: Brute Force O(n^2)
int maxAreaBruteForce(const vector<int>& height) {
    int maxWater = 0;
    int n = height.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int width = j - i;
            int h = min(height[i], height[j]);
            int currentWater = width * h;
            maxWater = max(maxWater, currentWater);
        }
    }
    return maxWater;
}

// Approach 2: Two Pointers O(n)
int maxAreaTwoPointers(const vector<int>& height) {
    int maxWater = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right) {
        int width = right - left;
        int h = min(height[left], height[right]);
        int currentWater = width * h;
        maxWater = max(maxWater, currentWater);

        // Move the pointer pointing to the smaller height to search for larger area
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maxWater;
}

int main() {
    vector<int> height1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Input: [1, 8, 6, 2, 5, 4, 8, 3, 7]" << endl;
    cout << "Max Water (Brute Force): " << maxAreaBruteForce(height1) << endl;
    cout << "Max Water (Two Pointers): " << maxAreaTwoPointers(height1) << endl << endl;

    vector<int> height2 = {1, 1};
    cout << "Input: [1, 1]" << endl;
    cout << "Max Water (Brute Force): " << maxAreaBruteForce(height2) << endl;
    cout << "Max Water (Two Pointers): " << maxAreaTwoPointers(height2) << endl;

    return 0;
}
