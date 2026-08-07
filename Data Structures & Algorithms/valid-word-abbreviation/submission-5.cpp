class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int n = word.size();
        int m = abbr.size();
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(isalpha(abbr[i])){
                if(abbr[i] == word[j]){
                    i++;
                    j++;
                }
                else{
                    return false;
                }
            }

            else if(isdigit(abbr[i])){
                if(abbr[i]=='0')return false;
                int val=0;
                while(i<m && isdigit(abbr[i])){
                    val = val*10 + (abbr[i]-'0');
                    i++;
                }
                j+=val;
            }
            else return false;
        }
        return i==m && j==n;
    }
};