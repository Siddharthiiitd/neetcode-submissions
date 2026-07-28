class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int count=0;
        int MOD = 1e9 + 7;
        int left =0;
        sort(nums.begin(),nums.end());
        int right = nums.size()-1;
        int n = nums.size();

        vector<int> pow2(n, 1);
        for (int i = 1; i < n; i++) {
            pow2[i] = (pow2[i-1] * 2LL) % MOD;
        }

        while(left<=right){
            if (nums[left] + nums[right] <= target) {
                // All subsequences formed by elements between left and right
                count = (count + pow2[right - left]) % MOD;
                left++;
            } else {
                right--;
            }
        }
        return count;
    }
};