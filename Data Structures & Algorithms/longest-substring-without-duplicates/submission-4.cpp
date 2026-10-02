class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int l=0;
        int ans=0;
        for(int i=0; i<s.size(); i++){
            while(set.find(s[i]) != set.end() ){
                set.erase(s[l]);
                l++;
            }
            set.insert(s[i]);
            ans = max(ans, i-l+1);
        }
        return ans;
    }
};
