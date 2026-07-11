class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto e : edges){
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(n,false);
        int component=0;

        for(int i=0; i<n; i++){
            if(!visited[i]){
                queue<int> Q;
                Q.push(i);
                visited[i]=true;
                component++;
                while(!Q.empty()){
                    int node = Q.front();
                    Q.pop();
                    for(auto nbh : adj[node]){
                        if(!visited[nbh]){
                            visited[nbh]=true;
                            Q.push(nbh);
                        }
                    }
                }
            }
        }
        return component;
    }
};
