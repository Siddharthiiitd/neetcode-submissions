class Solution {
public:
    int trap(vector<int>& heights) {
        // water trapped at index i = min(maxleft, maxRight) - height[i]

        int l=0;
        int r = heights.size()-1;
        int leftmax = heights[l];
        int rightmax = heights[r];

        int ans=0;

        while(l<r){
            if(leftmax <rightmax){
                l++;
                leftmax = max(leftmax, heights[l]);
                ans += leftmax - heights[l];
            }
            else{
                r--;
                rightmax = max(rightmax, heights[r]);
                ans+= rightmax - heights[r];
            }
        }

        return ans;
    }
};
