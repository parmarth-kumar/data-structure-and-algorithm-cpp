// Question 3 : LeetCode 238 - Product of Array Except Self
// Given an integer vector nums, return an array answer such that answer[i] is equal
// to the product of all the elements of nums except nums[i].
// The algorithm must run in O(n) time and without using the division operator.
//
// Approach 1 : Prefix & Suffix Products Array
// Time Complexity  : O(n)
// Space Complexity : O(n) auxiliary
//
// Approach 2 : Prefix Product with Running Suffix (Space-Optimized)
// Time Complexity  : O(n)
// Space Complexity : O(1) auxiliary (excluding output array)

#include <iostream>
#include <vector>

using namespace std;

// Approach 1: Using separate prefix and suffix product vectors
vector<int> productExceptSelfWithArrays(const vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);
    vector<int> ans(n);

    // Prefix products: prefix[i] stores product of nums[0 ... i-1]
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Suffix products: suffix[i] stores product of nums[i+1 ... n-1]
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Combine prefix and suffix products
    for (int i = 0; i < n; i++) {
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
}

// Approach 2: Optimized O(1) auxiliary space using single result vector
vector<int> productExceptSelfOptimized(const vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    // Pass 1: compute prefix products directly into ans
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // Pass 2: maintain running suffix product and multiply with prefix product
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    return ans;
}

void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << (i + 1 < vec.size() ? ", " : "");
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    cout << "Input: [1, 2, 3, 4]" << endl;
    cout << "Output (Approach 1): ";
    printVector(productExceptSelfWithArrays(nums1));
    cout << "Output (Approach 2): ";
    printVector(productExceptSelfOptimized(nums1));
    cout << endl;

    vector<int> nums2 = {-1, 1, 0, -3, 3};
    cout << "Input: [-1, 1, 0, -3, 3]" << endl;
    cout << "Output (Approach 1): ";
    printVector(productExceptSelfWithArrays(nums2));
    cout << "Output (Approach 2): ";
    printVector(productExceptSelfOptimized(nums2));

    return 0;
}
