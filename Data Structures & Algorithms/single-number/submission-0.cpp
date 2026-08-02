class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int zor =0;
        for(int num: nums){
            zor = zor^num;
        }
        return zor;
    }
};
