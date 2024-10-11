class Solution {
public:
    int path(vector<vector<int>>& dp,int m,int n, int r, int c){
        if(r==m-1 && c==n-1)return 1;
         if(r>=m || c>=n)return 0;
          if (dp[r][c] != -1) return dp[r][c];  
        dp[r][c] = path(dp,m,n,r+1,c) + path(dp,m,n,r,c+1);
        
        return dp[r][c];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return path(dp,m,n,0,0);
    }
};