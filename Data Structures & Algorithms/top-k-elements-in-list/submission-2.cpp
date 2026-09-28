class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<vector<int>> freq(nums.size()+1);

        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }

        for(auto &entry : map){
            freq[entry.second].push_back(entry.first);
        }
        vector<int> result;
        for(int i=freq.size()-1; i>=0; i--){
            for(int num : freq[i]){
                result.push_back(num);
                if(result.size()==k){
                    return result;
                }
            }
        }

    }
};
