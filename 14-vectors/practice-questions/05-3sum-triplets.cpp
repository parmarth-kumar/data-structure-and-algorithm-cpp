// Question 5 : LeetCode 15 - 3Sum
// Given an integer vector nums, return all the triplets [nums[i], nums[j], nums[k]]
// such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.
//
// Approach : Sorting + Two Pointers
// Time Complexity  : O(n^2)
// Space Complexity : O(1) auxiliary (ignoring output list)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int> nums) {
    vector<vector<int>> result;
    int n = nums.size();

    // Step 1: Sort the array to easily use two pointers and avoid duplicates
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
        // Skip duplicate values for the first element
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = n - 1;
        int target = -nums[i];

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicate values for second element
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }
                // Skip duplicate values for third element
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }

                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

void print2DVector(const vector<vector<int>>& mat) {
    cout << "[";
    for (size_t i = 0; i < mat.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << (j + 1 < mat[i].size() ? ", " : "");
        }
        cout << "]" << (i + 1 < mat.size() ? ", " : "");
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
    cout << "Input: [-1, 0, 1, 2, -1, -4]" << endl;
    cout << "Triplets that sum to 0: ";
    print2DVector(threeSum(nums1));
    cout << endl;

    vector<int> nums2 = {0, 1, 1};
    cout << "Input: [0, 1, 1]" << endl;
    cout << "Triplets that sum to 0: ";
    print2DVector(threeSum(nums2));
    cout << endl;

    vector<int> nums3 = {0, 0, 0};
    cout << "Input: [0, 0, 0]" << endl;
    cout << "Triplets that sum to 0: ";
    print2DVector(threeSum(nums3));

    return 0;
}
