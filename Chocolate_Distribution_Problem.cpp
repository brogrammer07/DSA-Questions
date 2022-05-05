// Question Link - "https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1/"

#include <bits/stdc++.h>
using namespace std;

// Approach 1
long long findMinDiff(vector<long long> a, long long n, long long m)
{
    sort(a.begin(), a.end());
    long long mn = LLONG_MAX;
    for (int i = 0; i + m - 1 < n; i++)
    {
        mn = min(a[i + m - 1] - a[i], mn);
    }
    return mn;
}
// SC - (n) TC - (nlogn)
