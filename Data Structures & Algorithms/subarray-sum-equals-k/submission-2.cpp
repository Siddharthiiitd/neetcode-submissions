class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> map;
        map[0]=1;
        int prefsum =0;
        for(int i=0; i<nums.size(); i++){
            prefsum += nums[i];
            int diff = prefsum - k;
            if(map.count(diff)){
                count+= map[diff];
            }
            map[prefsum]++;
        }
        return count;
    }
};