class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r = *max_element(piles.begin(),piles.end());
        int ans =0;
        while(l<=r){
            int speed = l+(r-l)/2;
            long long time=0;
            for(int pile : piles){
                time += (pile+speed-1)/speed;
            }
            if(time<=h){
                ans=speed;
                r = speed-1;
            }
            else{
                l=speed+1;
            }
        }
        return ans;
    }
};
