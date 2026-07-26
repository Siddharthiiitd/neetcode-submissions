class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            int idx =i;
            if(idx + k <= nums.size()){
                priority_queue<int> Q;
                while( idx < i+k){
                    Q.push(nums[idx]);
                    idx++;
                }
                result.push_back(Q.top());
            }
        }
        return result;
    }
};
