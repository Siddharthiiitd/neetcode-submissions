class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum%2 != 0){
            return false;
        }
        int target = sum/2;
        vector<bool> dp(target+1,false);
        dp[0]=true;
        for(int num: nums){
            for(int t=target; t>=num; t--){
                if(dp[t-num]){
                    dp[t]=true;
                }
            }
        }
        return dp[target];
    }
};
