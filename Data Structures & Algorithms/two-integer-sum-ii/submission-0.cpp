class Solution {
public:
    int binary_search(int target, vector<int> &nums){
        int i=0; int j=nums.size()-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(nums[mid]==target) return mid;
            else if( nums[mid]>target){
                j= mid-1;
            }
            else{

                i=mid+1;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0; i<numbers.size(); i++){
            int comp = target - numbers[i];
            int idx = binary_search(comp, numbers);
            if(idx != -1){
                if(idx > i){
                    return {i+1,idx+1};
                }
                else{
                    return{idx+1,i+1};
                }
            }
        }
        return {};
    }
};
