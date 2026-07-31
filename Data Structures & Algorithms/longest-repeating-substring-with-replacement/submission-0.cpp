class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxf =0;
        unordered_map<char,int> map;
        int count=0;
        int left =0;

        for(int i=0; i<s.length(); i++){
            map[s[i]]++;
            maxf= max(maxf,map[s[i]]);
            while(i-left+1 - maxf > k){
                map[s[left]]--;
                left++;
            }
            count = max(count, i-left+1);
        }
        return count;
    }
};
