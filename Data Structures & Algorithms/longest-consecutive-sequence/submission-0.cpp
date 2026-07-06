class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int x : nums){
            map[x]++;
        }

        int maxlen=0;
        for(int i=0; i<nums.size(); i++){
            int len=0;
            if(! map.count(nums[i]-1)){
                len =1;
                while(map.count(nums[i]+len)){
                    len++;
                }
                maxlen = max(maxlen,len);
            }
            maxlen= max(maxlen,len);
        }
        return maxlen;
    }
};
