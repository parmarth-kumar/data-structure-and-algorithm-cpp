// Question 4 : LeetCode 169 - Majority Element
// Given a vector nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.
//
// Approach 1 : Sorting
// Time Complexity  : O(n log n)
// Space Complexity : O(1) or O(n) depending on sort
//
// Approach 2 : Boyer-Moore Voting Algorithm (Optimal)
// Time Complexity  : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Approach 1: Sorting
int majorityElementSorting(vector<int> nums) {
    sort(nums.begin(), nums.end());
    // Since majority element appears > n/2 times, it will always occupy the middle index
    return nums[nums.size() / 2];
}

// Approach 2: Boyer-Moore Voting Algorithm O(n) Time, O(1) Space
int majorityElementMooreVoting(const vector<int>& nums) {
    int candidate = 0;
    int count = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

int main() {
    vector<int> nums1 = {3, 2, 3};
    cout << "Input: [3, 2, 3]" << endl;
    cout << "Majority Element (Sorting): " << majorityElementSorting(nums1) << endl;
    cout << "Majority Element (Moore's Voting): " << majorityElementMooreVoting(nums1) << endl << endl;

    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    cout << "Input: [2, 2, 1, 1, 1, 2, 2]" << endl;
    cout << "Majority Element (Sorting): " << majorityElementSorting(nums2) << endl;
    cout << "Majority Element (Moore's Voting): " << majorityElementMooreVoting(nums2) << endl;

    return 0;
}
