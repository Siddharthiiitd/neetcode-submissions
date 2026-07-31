class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        for(int i=0; i<s.length(); i++){
            int j=i;
            int len=0;
            unordered_set<char> set;
            while(j<s.length() && set.find(s[j]) == set.end()){
                set.insert(s[j]);
                len++;
                j++;
            }
            maxlen= max(len,maxlen);
        }
        return maxlen;
    }
};
