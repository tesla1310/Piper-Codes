https://leetcode.com/problems/non-decreasing-array/



class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        if(nums.size()<2) return true;
        int c=0;
        if(nums[0]>nums[1])
            c++;
        
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                c++;
                if(nums[i-1]<nums[i+1])
                {
                    nums[i]=nums[i+1];
                }
                else
                {
                    nums[i+1]=nums[i];
                }
            }
        }
        if(c>1) return false;
            
        else return true;
        
    }                 
};