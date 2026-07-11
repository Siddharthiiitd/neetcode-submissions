class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int time = 0;
        int n = grid.size();
        int m = grid[0].size();
        int fresh=0;

        queue<pair<int,int>>Q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==2){
                    Q.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }

        if(fresh ==0) return 0;
        vector<int> dc = {-1,0,1,0};
        vector<int> dr = {0,1,0,-1};

        while(!Q.empty() && fresh>0){
            int len = Q.size();
            for(int i=0; i<len; i++){
                auto cur = Q.front();
                Q.pop();
                int r = cur.first;
                int c = cur.second;

                for(int k=0; k<4; k++){
                    int nr = r + dr[k];
                    int nc = c +dc[k];
                    if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        fresh--;
                        Q.push({nr,nc});
                    }
                }
            }
            time++;
            
        }

        return fresh==0? time: -1;
    }
};
