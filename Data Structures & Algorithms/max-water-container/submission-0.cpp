class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxwater =0;
        for(int i=0; i<nums.size()-1; i++){
            int j=i+1;
            while(j<nums.size()){
                int curr=1;
                if(nums[i]<nums[j]) curr = (j-i)*nums[i];
                else curr = (j-i)*nums[j];
                maxwater = max(maxwater,curr); 
                j++;
            }
        }
        return maxwater;
        
    }
};
