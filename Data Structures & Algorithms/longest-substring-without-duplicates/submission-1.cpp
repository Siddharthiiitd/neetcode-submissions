class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        unordered_set<int> set;
        int left=0;
        for(int i=0; i<s.length(); i++){
            while(set.find(s[i]) != set.end()){
                set.erase(s[left]);
                left++;
            }
            set.insert(s[i]);
            maxlen= max(maxlen, i-left+1);
        }
        return maxlen;
    }
};
