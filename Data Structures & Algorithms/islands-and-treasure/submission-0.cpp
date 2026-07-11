class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n =  grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> Q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==0){
                    Q.push({i,j});
                }
            }
        }
        vector<int> dr = {-1,0,1,0};
        vector<int> dc = {0,-1,0,1};

        while(!Q.empty()){
            auto cur = Q.front();
            Q.pop();
            int r = cur.first;
            int c = cur.second;

            for(int k=0; k<4; k++){
                int nr = r + dr[k];
                int nc = c +  dc[k];

                if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc]== INT_MAX ){
                    grid[nr][nc] = grid[r][c]+1;
                    Q.push({nr,nc});
                }
            }
        }

    }
};
