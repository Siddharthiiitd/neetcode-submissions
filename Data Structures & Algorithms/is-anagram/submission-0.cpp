class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr(26,0);
        for(char ch : s){
            arr[ch-'a']++;
        }
        for(char ch : t){
            arr[ch-'a']--;
        }
        for(auto val : arr){
            if(val!=0) return false;
        }

        return true;
    }
};
