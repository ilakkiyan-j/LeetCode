class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n = maze.size();
        int m = maze[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        q.push({{entrance[0],entrance[1]},0});
        vis[entrance[0]][entrance[1]]=1;

        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!q.empty()){
            int nr = q.front().first.first;
            int nc = q.front().first.second;
            int step = q.front().second;
            
            q.pop();
            for(int i=0;i<4;i++){
                int r = nr+drow[i];
                int c = nc+dcol[i];
                 if(r >= 0 && r < n && c >= 0 && c < m && maze[r][c]=='.' && vis[r][c]==0){
                    if(r==0 || r==n-1 || c==0 || c==m-1)return step+1;
                    else{
                        vis[r][c]=1;
                        q.push({{r,c},step+1});
                    }
                 }
            }

        }
        return -1;
    }
};