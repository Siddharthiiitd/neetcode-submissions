class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int n : nums){
            map[n]++;
        }
        for(auto [num,freq] : map){
            if(freq >1) return num;
        }
        return -1;

    }
};
