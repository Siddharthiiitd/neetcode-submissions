class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        stack<pair<int,int>> st;
        vector<int> result(n,0);
        for(int i=0; i<n; i++){
            int t= temp[i];
            while(!st.empty() && t > st.top().first){
                pair duo = st.top();
                st.pop();
                result[duo.second] = i - duo.second;
            }
            st.push({temp[i],i});
        }
        return result;
    }
};
