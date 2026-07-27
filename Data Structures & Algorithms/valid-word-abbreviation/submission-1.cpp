class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i=0;
        int j=0;
        int n = word.size();
        int m = abbr.size();
        while(i<m && j<n){
            if(isalpha(abbr[i])){
                if(abbr[i]!=word[j]){
                    return false;
                }
                i++;
                j++;
            }
            else if(isdigit(abbr[i])){
                if(abbr[i]=='0') return false;
                int val =0;
                while(i<m && isdigit(abbr[i])){
                    val = val*10 + (abbr[i]-'0');
                    i++;
                }
                j+= val;

            }
            else return false;
        }
        return i==m && j==n;
    }
};