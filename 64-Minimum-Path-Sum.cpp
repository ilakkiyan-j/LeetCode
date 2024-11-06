class Solution {
public:
  int back(int i ,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
          if(i==0 && j==0)return dp[i][j] = grid[i][j];
          else if(i<0 || j<0)return 1e9;
          else if(dp[i][j]!=-1)return dp[i][j];
          
          else{
             int left = grid[i][j]+back(i,j-1,grid,dp);
             int up = grid[i][j] +back(i-1,j,grid,dp);
             return dp[i][j] = min(left,up);
          }
          
  }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return back(n-1,m-1,grid,dp);
    }
};