class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char,char> mapst;
        unordered_map<char,char> mapts;

        for(int i=0; i<s.size(); i++){
            char cs = s[i];
            char ct = t[i];

            if(mapst.count(cs) && mapst[cs] != ct) return false;
            if(mapts.count(ct) && mapts[ct] != cs) return false;

            mapst[cs]=ct;
            mapts[ct]=cs;
        }
        return true;



    }
};