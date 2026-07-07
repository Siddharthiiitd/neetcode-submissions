class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(auto x : nums1){
            arr.push_back(x);
        }
        for(auto x : nums2){
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());

        int n =arr.size();
        if(n%2 == 0){
            double median = (arr[n/2] + arr[n/2 - 1])/2.0;
            return median;
        }
        else return arr[n/2];
    }
};
