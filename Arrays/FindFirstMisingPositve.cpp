//https://leetcode.com/problems/first-missing-positive/



class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            
            while(nums[i]!=i+1){
                //positive elements and < then n
                if(nums[i]<=0||nums[i]>nums.size()){
                    break;
                }
                
                //already at correct position
                if(nums[nums[i]-1]==nums[i]){
                    break;
                }
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
        
        return nums.size()+1;
    }
};
