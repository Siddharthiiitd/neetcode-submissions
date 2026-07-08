class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if(n==0 || s[0]=='0') return 0;
        vector<int> dp(n+1);
        // dp[i] represents number of ways to decode string s[0....i-1]
        dp[0]=1;
        dp[1]=1;
        for(int i=2; i<=n; i++){
            if(s[i-1] !='0'){
                dp[i]+= dp[i-1];
            }

            int val = stoi(s.substr(i-2,2));
            if( val>=10 && val<=26) dp[i] += dp[i-2];
        }
        return dp[n];
    }
};
