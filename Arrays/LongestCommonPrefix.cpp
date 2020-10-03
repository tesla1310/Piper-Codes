// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string ""

// Question Link : https://leetcode.com/problems/longest-common-prefix/

#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define PI 3.14159265358979323846
#define INF 1e9 + 5
using namespace std;

string solve(vector<string> &strs)
{
    int n = strs.size(), m = INT_MAX;
    string prefix = "";

    if (!strs.size())
        return prefix;

    for (int i = 0; i < n; i++)
    {
        int x = strs[i].size();
        if (x < m)
            m = x;
    }

    for (int j = 0; j < m; j++)
    {
        int i = 0, flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (strs[i][j] != strs[i + 1][j])
                return prefix;
        }
        prefix.push_back(strs[i][j]);
    }
    return prefix;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int n;
    cin >> n;

    vector<string> strs(n);

    for (int i = 0; i < n; i++)
        cin >> strs[i];

    cout << solve(strs) << "\n";

    return 0;
}

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size(), m = INT_MAX;
        string prefix = "";

        if (!strs.size())
            return prefix;

        for (int i = 0; i < n; i++)
        {
            int x = strs[i].size();
            if (x < m)
                m = x;
        }

        for (int j = 0; j < m; j++)
        {
            int i = 0, flag = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (strs[i][j] != strs[i + 1][j])
                    return prefix;
            }
            prefix.push_back(strs[i][j]);
        }
        return prefix;
    }
};