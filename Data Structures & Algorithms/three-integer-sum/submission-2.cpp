class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target = -1 * nums[i];
            int l = i+1;
            int r = nums.size()-1;
            while(l<r){
                int sum = nums[l]+nums[r];
                if(sum == target){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    while( l<r && nums[l]==nums[l+1] ) l++;
                    while(l<r && nums[r]== nums[r-1]) r--;
                    l++;
                    r--;
                }
                else if(sum<target) l++;
                else r--;
            }
        }
        return ans;
    }
};
