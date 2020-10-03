// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string ""

// Question Link : https://leetcode.com/problems/longest-common-prefix/
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