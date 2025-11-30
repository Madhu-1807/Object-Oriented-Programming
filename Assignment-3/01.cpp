/*Next Greater Element: For each element in an array, find the next greater element to
its right using a stack.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st; // will store indices

    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            result[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return result;
}

int main() {
    vector<int> arr = {4, 5, 2, 25};
    vector<int> ans = nextGreaterElements(arr);
    for (int x : ans) cout << x << " ";
    return 0;
}
