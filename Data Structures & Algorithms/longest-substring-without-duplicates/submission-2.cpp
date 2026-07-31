class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        int l =0;
        unordered_set<char> set;
        for(int r=0; r<s.length(); r++){
            while(set.find(s[r]) != set.end() && r<s.length()){
                set.erase(s[l]);
                l++;
            }
            set.insert(s[r]);
            maxlen= max(maxlen, r-l+1);
        } 
        return maxlen;
    }
};
