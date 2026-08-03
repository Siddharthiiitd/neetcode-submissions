class Solution {
public:
    int reverse(int x) {
        int temp =x;
        
        long long rev =0;
        while(temp){
            int n = temp%10;
            rev = rev*10 + n;
            temp = temp/10;
        }
        if(rev<INT_MIN || rev> INT_MAX) return 0;
        return (int)rev;
    }
};
