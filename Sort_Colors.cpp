// Question Link - "https://leetcode.com/problems/sort-colors/"

#include <bits/stdc++.h>
using namespace std;

// Approach 1
void sortColors(vector<int> &nums)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    int idx = 0;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        int count = i->second;
        int k = i->first;
        for (int j = 0; j < count; j++)
        {
            nums[idx] = k;
            idx++;
        }
    }
}
// SC - (n) TC - (n)

// Approach 2 (Dutch National Flag Algorithm)
void sortColors(vector<int> &nums)
{
    int i = 0, k = nums.size() - 1, j = 0;
    while (j <= k)
    {
        if (nums[j] == 0)
            swap(nums[i++], nums[j++]);
        else if (nums[j] == 1)
            j++;
        else if (nums[j] == 2)
            swap(nums[j], nums[k--]);
    }
}
// SC - (1) TC - (n)