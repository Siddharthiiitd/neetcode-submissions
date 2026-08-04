class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        for(int i=0; i<nums1.size(); i++){
            map[nums1[i]]=i;
        }
        vector<int> result(nums1.size(),-1);
        for(int i=0; i<nums2.size()-1; i++){
            for(int j=i+1; j<nums2.size(); j++){
                if(nums2[i]<nums2[j]){
                    if(map.find(nums2[i]) != map.end()){
                        int idx = map[nums2[i]];
                        result[idx]=nums2[j];
                    }
                    break;
                }
            }
        }
        return result;
    }
};