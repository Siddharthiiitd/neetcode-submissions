class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int> Q;
        for(int num : nums){
            Q.push(num);
        }

        nums.clear();
        while(!Q.empty()){
            int val = Q.top();
            Q.pop();
            nums.push_back(val);
        }
        reverse(nums.begin(),nums.end());
        return nums;
    }
};