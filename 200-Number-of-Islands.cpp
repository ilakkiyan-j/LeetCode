class Solution {
public:

   void bfs(vector<vector<char>>& grid,int r,int c, vector<vector<int>>& vis){
    vis[r][c]=1;
            queue<pair<int,int>> q;
            q.push({r,c});
            int m = grid.size();
            int n = grid[0].size();

             int dr[] = {-1, 1, 0, 0};
            int dc[] = {0, 0, -1, 1};

            while(!q.empty()){
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
            for (int i = 0; i < 4; i++) {  
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == '1' && vis[nr][nc] == 0) {
                q.push({nr, nc});
                vis[nr][nc] = 1;
            }
        }
            }
            }

   
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
       vector<vector<int>> vis(m,vector<int>(n,0));
       int island=0;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(vis[i][j]== 0 && grid[i][j] =='1'){
                bfs(grid,i,j,vis);
                island++;
            }
        }
       } 
       return island;
    }
};