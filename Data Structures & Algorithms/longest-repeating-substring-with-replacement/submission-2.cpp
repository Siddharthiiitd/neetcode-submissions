class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans =0;
        unordered_map<char,int> map;
        int l=0;
        int maxf=0;
        for(int i=0; i<s.size(); i++){
            map[s[i]]++;
            maxf= max(maxf,map[s[i]]);

            while( (i-l+1)-maxf >k){
                map[s[l]]--;
                l++;
            }

            ans = max(i-l+1,ans);
        }
        return ans;
    }
};
