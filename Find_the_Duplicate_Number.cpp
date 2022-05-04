// Question Link - "https://leetcode.com/problems/find-the-duplicate-number/"

#include <bits/stdc++.h>
using namespace std;

// Approach 1
int findDuplicate(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int ans;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
        if (mp[nums[i]] > 1)
            ans = nums[i];
    }
    return ans;
}
// SC - (n) TC - (n)

// Approach 2
int findDuplicate(vector<int> &nums)
{
    while (nums[0] != nums[nums[0]])
        swap(nums[0], nums[nums[0]]);
    return nums[0];
}
// SC - (1) TC - (n)