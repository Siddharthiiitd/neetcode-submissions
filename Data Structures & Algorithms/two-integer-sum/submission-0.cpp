class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;

        for(int i=0; i<nums.size(); i++){
            int comp = target - nums[i];
            if(map.count(comp)){
                if(i<map[comp]) return{i,map[comp]};
                else return {map[comp],i};
            }
            map[nums[i]]=i;
        }
        
    }
};
