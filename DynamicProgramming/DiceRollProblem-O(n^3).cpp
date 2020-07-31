problem : https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/
explaination : https://www.youtube.com/watch?v=UiYVToWORMY


class Solution {
public:
    int numRollsToTarget(int d, int f, int target) {
        int dp[d][target+1];
        for(int i=1;i<target+1;i++){
            if(i<=f){
                dp[0][i]=1;
            }else{
                dp[0][i]=0;
            }
        }
        int m = 1000000007;
        for(int i=0;i<d;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<d;i++){
            for(int j=1;j<target+1;j++){
                dp[i][j]=0;
                //we have to add every possibility of prev dice from faces 1 to f
                for(int k=1;k<=f&&j-k>=0;k++){
                    dp[i][j]=(dp[i][j]+dp[i-1][j-k])%m;
                }
            }
            
        }
        
        return dp[d-1][target];
    
    }
};
