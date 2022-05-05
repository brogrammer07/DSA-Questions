// Question Link - "https://leetcode.com/problems/two-sum/"

#include <bits/stdc++.h>
using namespace std;

// Approach 1
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        int k = target - nums[i];
        if (map.count(k) > 0)
        {
            return {map[k], i};
        }
        map[nums[i]] = i;
    }
    return {-1, -1};
}
// SC - (n) TC - (n)

// Approach 2
vector<int> twoSum(vector<int> &nums, int t)
{
    int n = nums.size(), l{}, r{n - 1};
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; ++i)
        v[i] = {nums[i], i};

    sort(v.begin(), v.end());

    while (l < r)
    {
        int a{v[l].first}, b{t - v[r].first};

        if (a == b)
            return {v[l].second, v[r].second};
        if (a < b)
            ++l;
        else
            --r;
    }
    return {};
}
// SC - (n) TC - (nlogn)
