class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        int fresh =0;
       vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)fresh++;
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
                
            }
        } 
        int drow[] ={-1,0,1,0};
        int dcol[] ={0,1,0,-1};
        int tm=0;
        while(!q.empty()){
              int nr = q.front().first.first;
              int nc = q.front().first.second;
              int t = q.front().second;
              q.pop();
              tm = max(t,tm);
              for(int i=0;i<4;i++){
                int r = nr+drow[i];int c = nc+dcol[i];
                   if(r>=0 && r<n && c>=0 && c<m && grid[r][c]== 1 && vis[r][c]==0){
                     q.push({{r,c},t+1});
                     vis[r][c]=2;
                     fresh--;
                   }
              }
        }
        return fresh ==0 ? tm:-1;
    }
};