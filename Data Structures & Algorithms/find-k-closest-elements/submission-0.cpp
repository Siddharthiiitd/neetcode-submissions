class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > Q;

        for(int num: arr){
            int diff = abs(num-x);
            Q.push({diff,num});
        }

        vector<int> result;
        while(!Q.empty() && k>0){
            int val = (Q.top()).second;
            Q.pop();
            result.push_back(val);
            k--;
        }
        sort(result.begin(),result.end());
        return result;
    }
};