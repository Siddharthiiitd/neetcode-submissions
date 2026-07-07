class Solution {
public:
    int bs(int start, int end, vector<int> &nums, int target){
        int l= start;
        int r = end;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]>target){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int idx=0;
        int l=0;
        int r =n-1;
        while(l<r){
            int mid = l + (r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        idx =l;

        int ans1 = bs(0,idx,nums,target);
        int ans2 = bs(idx,n-1,nums,target);
        if(ans1!=-1) return ans1;
        else return ans2;
    }
};
