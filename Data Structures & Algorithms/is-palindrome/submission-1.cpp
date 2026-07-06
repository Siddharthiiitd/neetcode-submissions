class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(auto ch: s){
            if(ch ==' ' || ! isalnum(ch)){
                continue;
            }
            str += tolower(ch);
        }
        cout<<str;
        int i=0;
        int j=str.size()-1;
        while(i<=j){
            if( str[i] != str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
