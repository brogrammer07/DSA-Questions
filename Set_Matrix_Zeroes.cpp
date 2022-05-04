// Question Link - "https://leetcode.com/problems/set-matrix-zeroes/"

#include <bits/stdc++.h>
using namespace std;

// Approach 1
void setZeroes(vector<vector<int>> &matrix)
{
    set<int> row, col;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                row.insert(i);
                col.insert(j);
            }
        }
    }

    for (auto it : row)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            matrix[it][j] = 0;
        }
    }

    for (auto it : col)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            matrix[j][it] = 0;
        }
    }
}
// SC - (M+N) TC - (M*N)
