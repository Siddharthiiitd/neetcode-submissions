class Solution {
public:
    bool check(int left, int right, string s){
        while(left<right){
            if(s[left]!= s[right]){
                return false;
            }
            else{
                left++;
                right--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=  s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return check(i,j-1,s) || check(i+1,j,s);
            }
            i++;
            j--;
        }
        return true;
    }
};