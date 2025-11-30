/*Longest Increasing Subsequence: Compute the LIS length using a vector and
std::lower bound in O(n log n) time.*/

#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(string s) {
    vector<char> lis;

    for (char c : s) {
        auto it = lower_bound(lis.begin(), lis.end(), c);
        if (it == lis.end())
            lis.push_back(c);
        else
            *it = c;
    }
    return lis.size();
}

int main() {
    string s = "bdcaeg";
    cout << lengthOfLIS(s);
    return 0;
}

