class Solution {
public:
    int LPS(string& s,int l,int r, vector<vector<int>>& dp){
         if(l>r)return 0;
         if(l==r)return 1;
         if(dp[l][r]!=0)return dp[l][r];
         if(s[l]==s[r])return dp[l][r]=2+LPS(s,l+1,r-1,dp);
         else{
            return dp[l][r]=max(LPS(s,l+1,r,dp),LPS(s,l,r-1,dp));
         }
    }
    int longestPalindromeSubseq(string s) {
        int l = 0;
        int r = s.length();
        vector<vector<int>> dp(r,vector<int>(r,0));
        return  LPS(s,l,r-1,dp);
    }
};