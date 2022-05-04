// Question Link - "https://leetcode.com/problems/remove-duplicates-from-sorted-array/"

#include <bits/stdc++.h>
using namespace std;

// Approach 1
int removeDuplicates(vector<int> &nums)
{
    int check = -101;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == check)
        {
            nums[i] = 101;
        }
        else
        {
            check = nums[i];
        }
    }

    int index = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 101)
        {
            nums[index] = nums[i];
            ++index;
        }
    }
    return index;
}
// SC - (1) TC - (n)

// Approach 2 (Two pointers)
int removeDuplicates(vector<int> &nums)
{
    int curr = 0, uni = 0, count = 1;
    if (nums.size() == 0)
        return 0;
    while (curr != nums.size())
    {
        if (nums[curr] == nums[uni])
        {
            curr++;
        }
        else
        {
            uni++;
            swap(nums[curr], nums[uni]);
            curr++;
            count++;
        }
    }

    return count;
}
// SC - (1) TC - (n)