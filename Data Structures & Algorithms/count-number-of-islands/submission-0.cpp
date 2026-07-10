class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1'){
                    ans++;
                    bfs(grid,i,j);
                }
            }
        }
        return ans;
    }
    void bfs(vector<vector<char>> &grid, int i, int j){
        queue<pair<int,int>> Q;
        Q.push({i,j});

        vector<int> dr = {-1,0,1,0};
        vector<int> dc = {0,-1,0,1};

        grid[i][j]='0';

        while(!Q.empty()){
            pair<int,int> curr = Q.front();
            Q.pop();
            int r= curr.first;
            int c = curr.second;

            for(int k=0; k<4; k++){
                int nr= r + dr[k];
                int nc = c + dc[k];
                if(nr>=0 && nr<grid.size() && nc>=0 && nc<grid[0].size() && grid[nr][nc]=='1'){
                    Q.push({nr,nc});
                    grid[nr][nc]='0';
                }
            }
        }
    }
};
