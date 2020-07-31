problem : https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/

// 31/7/2020 : Not working for bigger cases eg. 30 30 500

class Solution {
public:
    int numRollsToTarget(int d, int f, int target) {
        vector<vector<pair<int,int>>>dp;
        int sum = 0;
        int m = 1000000007;
        vector<pair<long long int,long long int>>temp;
        dp.push_back(temp);
        for(int i=0;i<target+1;i++){
            if(i==0){
                dp[0].push_back({0,0});
            }else{
                if(i<=f){
                    dp[0].push_back({1,0});
                }else{
                    dp[0].push_back({0,0});
                }
                sum+=dp[0][i].first;
                dp[0][i].second = sum;
            }
           
        }
        for(int i=1;i<d;i++){
            dp.push_back(temp);
            sum=0;
            for(int j=0;j<target+1;j++){
                int cur = 0;
                if(j==0){
                    dp[i].push_back({0,0}); 
                    continue;
                }else{
                    
                    if(j-f<=0){
                        cur = dp[i-1][j-1].second;
                    }else{
                        cur = dp[i-1][j-1].second-dp[i-1][j-f-1].second;
                    }
                    dp[i].push_back({cur,0});  
                }
                dp[i][j].second = (dp[i][j-1].second + dp[i][j].first)%m;
            }
        }
        
        for(int i=0;i<d;i++){
            for(int j=0;j<target+1;j++){
                 cout<<dp[i][j].first<<","<<dp[i][j].second<<"  ";
            }
            cout<<endl;
        }
        return dp[d-1][target].first;
    
    }
};
