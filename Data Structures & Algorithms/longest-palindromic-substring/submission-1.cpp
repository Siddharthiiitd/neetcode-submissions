class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int anslen =0;
        int ansidx=0;

        for(int i=0; i<n; i++){

            int l=i; int r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(anslen < r-l+1){
                    anslen = r-l+1;
                    ansidx=l;
                }
                l--;
                r++;
            }

            l=i;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(anslen < r-l+1){
                    anslen = r-l+1;
                    ansidx =l;
                }
                l--;
                r++;
            }
        }
        return s.substr(ansidx, anslen);
        
    }
};
