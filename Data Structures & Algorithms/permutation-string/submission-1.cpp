class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        sort(s1.begin(),s1.end());
        for(int i=0; i<s2.size()-s1.size()+1; i++){
            string sbstr = s2.substr(i, s1.size());
            sort(sbstr.begin(),sbstr.end());
            if(s1 == sbstr) return true;
        }
        return false;
    }
};
