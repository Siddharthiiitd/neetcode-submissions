class Solution {
public:

    string encode(vector<string>& strs) {
        string enc="";
        for(int i=0; i<strs.size(); i++){
            enc += strs[i];
            enc += ';';
        }
        return enc;
    }

    vector<string> decode(string s) {
        int n = s.size();
        vector<string> ans;
        string sub="";
        int i=0;
        while(i< s.size()){
            if(s[i]==';'){
                ans.push_back(sub);
                sub="";
                i++;
                continue;
            }
            sub += s[i];
            i++;
        }

        return ans;

    }
};
