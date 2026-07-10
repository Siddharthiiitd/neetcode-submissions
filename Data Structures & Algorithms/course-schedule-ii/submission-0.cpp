class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses,0);
        for(int i=0; i<prerequisites.size(); i++){
            int u= prerequisites[i][0];
            int v= prerequisites[i][1];

            adj[v].push_back(u);
            indegree[u]++;
        }

        queue<int> Q;
        for(int i=0; i<numCourses; i++){
            if(indegree[i]==0){
                Q.push(i);
            }
        }

        vector<int> result;
        while(!Q.empty()){
            int node = Q.front();
            Q.pop();
            result.push_back(node);
            for(int child : adj[node]){
                indegree[child]--;
                if(indegree[child]==0){
                    Q.push(child);
                }
            }
        }
        if(numCourses == result.size()) return result;
        return {};
    }
};












