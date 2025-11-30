/*Sliding Window Maximum: Given an array and a window size k, find the maximum
in each sliding window using a deque.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> slidingWindowMax(vector<int>& nums, int k) {
    deque<int> dq; // stores indices
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        // Removes non-window elements
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Removes smaller elements 
        while (!dq.empty() && nums[dq.back()] <= nums[i])
            dq.pop_back();

        dq.push_back(i);

        // We have valid windows
        if (i >= k - 1)
            result.push_back(nums[dq.front()]);
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> ans = slidingWindowMax(arr, k);

    for (int x : ans) cout << x << " ";
    return 0;
}
