class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set list(nums.begin(),nums.end());
        for(int i=0; i<=nums.size(); i++){
            if(list.find(i)== list.end()){
                return i;
            }
        }
        return -1;

    }
};
