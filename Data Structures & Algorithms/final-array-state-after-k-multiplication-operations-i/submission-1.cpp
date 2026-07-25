class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>  Q;

        vector<int> result = nums;

        for(int i=0; i<nums.size(); i++){
            Q.push({nums[i],i});
        }

        for(int i=0; i<k; i++){
            auto ele = Q.top();
            Q.pop();
            int val = ele.first;
            int idx = ele.second;
            result[idx] = val * multiplier;
            Q.push({result[idx],idx});
        }

        return result;

    }
};