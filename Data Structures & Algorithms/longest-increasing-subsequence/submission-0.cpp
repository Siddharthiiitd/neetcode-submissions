class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        //dp[i] = length of longest subsequence ending at index i
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[j]<nums[i] ){
                    dp[i]= max(dp[i], 1 + dp[j]);
                }
            }
        }
        return *max_element(dp.begin(), dp.end());
        


    }
};
