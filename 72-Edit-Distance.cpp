class Solution {
public:
      int dist(string s1,string s2,int n, int m,vector<vector<int>>& dp){
            if(n<0)return m+1;
            if(m<0)return n+1;
            if(dp[n][m]!=-1)return dp[n][m];
            char ch1 = s1[n];
            char ch2 = s2[m];
            if(ch1 == ch2)return dp[n][m]= dist(s1,s2,n-1,m-1,dp);
            else{
                int insert = 1+dist(s1,s2,n,m-1,dp);
                int del = 1+dist(s1,s2,n-1,m,dp);
                int rep = 1+dist(s1,s2,n-1,m-1,dp);
                return dp[n][m]=min(insert,min(del,rep));
            }
       } 
    int minDistance(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return dist(word1,word2,n-1,m-1,dp);
    }
};