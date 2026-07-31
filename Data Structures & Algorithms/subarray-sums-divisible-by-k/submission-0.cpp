class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int count =0;
        int cursum=0;
        map[0]=1;
        for(int i=0; i<nums.size(); i++){
            cursum +=  nums[i];
            int remain = cursum%k;
            if(remain<0){
                remain+=k;
            }
            count += map[remain];
            map[remain]++;
        }
        return count;
    }
};