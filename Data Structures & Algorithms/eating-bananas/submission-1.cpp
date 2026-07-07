class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m = *max_element(piles.begin(),piles.end());
        int l =1;
        int r =m;
        int ans = m;

        while(l<=r){
            int time=0;
            int k = l+(r-l)/2;
            for(int p : piles){
                time += (p + k -1)/k;
            }
            if(time<=h){
                ans = k;
                r  = k-1;
            }
            else{
                l = k+1;
            }
        }
        return ans;
        
    }
};
