class Solution {
public:
    string longestPalindrome(string s) {
        int maxlen = INT_MIN;
        int n = s.size();
        string ans ="";
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int l=i;int r =j;
                while(l<=r && s[l]==s[r]){
                    l++;
                    r--;
                }
                if(r<l && maxlen< j-i+1){
                    maxlen = j-i+1;
                    ans = s.substr(i,j-i+1);
                }
            }
        }
        return ans;
    }
};
