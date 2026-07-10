class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    int area = bfs(grid,i,j);
                    ans = max(ans, area);
                }
            }
        }
        return ans;
    }

    int bfs(vector<vector<int>> &grid,int i, int j){
        queue<pair<int,int>> Q;
        Q.push({i,j});
        grid[i][j]=0;

        int area =0;
        vector<int> dr ={-1,0,1,0};
        vector<int> dc = {0,-1,0,1};

        while(!Q.empty()){
            auto curr  = Q.front();
            Q.pop();
            area++;
            int r = curr.first;
            int c = curr.second;

            for(int k=0; k<4; k++){
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr>=0 && nr<grid.size() && nc>=0 && nc<grid[0].size() && grid[nr][nc]==1){
                    Q.push({nr,nc});
                    grid[nr][nc]=0;
                }
            }
        }
        return area;
    }
};






