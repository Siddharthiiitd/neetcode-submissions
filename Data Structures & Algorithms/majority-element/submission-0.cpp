class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }

        for(auto [num,freq] : map){
            if(freq > nums.size()/2){
                return num;
            }
        }
        return -1;
    }
};