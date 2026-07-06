class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;

        for(int el : nums){
            if(!map.count(el)){
                map[el]++;
            }
            else{
                return true;
            }
        }

        return false;
    }
};