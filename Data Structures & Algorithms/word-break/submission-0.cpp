class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> dp(n+1);

        dp[n]=true;
        for(int i=n-1; i>=0; i--){
            for(auto w : wordDict){
                if( s.substr(i,w.size()) == w){
                    dp[i]= dp[i + w.size()];
                }
                if(dp[i]==true){
                    break;
                }
            }
        }
        return dp[0];

    }
};
