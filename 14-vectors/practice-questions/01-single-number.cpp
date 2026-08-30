// Question 1 : LeetCode 136 - Single Number
// Given a non-empty vector of integers nums, every element appears twice except for one.
// Find that single one.
//
// Approach : Bitwise XOR (a ^ a = 0, a ^ 0 = a)
// Time Complexity  : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <vector>

using namespace std;

int singleNumber(const vector<int>& nums) {
    int uniqueElement = 0;
    for (int val : nums) {
        uniqueElement ^= val;
    }
    return uniqueElement;
}

int main() {
    vector<int> nums1 = {2, 2, 1};
    cout << "Input: [2, 2, 1]" << endl;
    cout << "Single Number: " << singleNumber(nums1) << endl << endl;

    vector<int> nums2 = {4, 1, 2, 1, 2};
    cout << "Input: [4, 1, 2, 1, 2]" << endl;
    cout << "Single Number: " << singleNumber(nums2) << endl << endl;

    vector<int> nums3 = {1};
    cout << "Input: [1]" << endl;
    cout << "Single Number: " << singleNumber(nums3) << endl;

    return 0;
}
