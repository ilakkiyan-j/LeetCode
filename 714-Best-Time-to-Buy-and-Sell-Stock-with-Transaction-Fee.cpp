class Solution {
public:
    int func(vector<vector<int>>& dp,vector<int>& v,int i,int flg,int fee){
        int n = v.size();
        if(i==n) return 0;
        if(dp[i][flg]!=-1)return dp[i][flg];
        int ans =0;
        if(flg){
            int take = -v[i] + func(dp,v,i+1,0,fee);
            int ntake = func(dp,v,i+1,1,fee);
            ans = max(take,ntake);
        }
        else{
            int take = v[i]+func(dp,v,i+1,1,fee)-fee;
            int ntake = func(dp,v,i+1,0,fee);
            ans = max(take,ntake);
        }
        return dp[i][flg]=ans;
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        return func(dp,prices,0,1,fee);
    }
};