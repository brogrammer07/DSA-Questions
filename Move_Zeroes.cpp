// Question Link - "https://leetcode.com/problems/move-zeroes/"

#include <bits/stdc++.h>
using namespace std;

// Approach 1 (Two Pointers)
void moveZeroes(vector<int> &nums)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}
// SC - (1) TC - (n)
