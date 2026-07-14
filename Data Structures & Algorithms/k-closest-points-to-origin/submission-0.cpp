class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> result;

        priority_queue<pair<float, vector<int>>, vector<pair<float, vector<int>>>, greater<pair<float, vector<int>>>> pq ;

        for(int i =0; i<points.size(); i++){
            int x = points[i][0];
            int y = points[i][1];

            float dist = sqrt(x*x + y*y);
            pq.push({dist, {x,y}});
        }
        while(result.size()!=k){
            auto coord = pq.top().second;
            pq.pop();
            result.push_back(coord);
        }
        return result;
    }
};
