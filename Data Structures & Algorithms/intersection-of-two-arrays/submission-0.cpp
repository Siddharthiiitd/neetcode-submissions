class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                result.insert(nums1[i]);
                i++;
                j++;
                continue;
            }
            if(nums1[i]>nums2[j]) j++;
            else i++;
        }
        vector<int> ans (result.begin(),result.end());
        return ans;
    }
};