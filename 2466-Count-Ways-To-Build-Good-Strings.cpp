class Solution {
public:
   int mod = 1e9+7;
    int counter(int l, int low, int high, int zero, int one, vector<int>& dp ){

          if(l>high)return 0;
          if(dp[l]!=-1)return dp[l];
              int count = (l >= low && l <= high) ? 1 : 0;
          if(zero>0) count= (count+counter(l+zero,low,high,zero,one,dp))%mod;
          if(one>0)count=(count+counter(l+one,low,high,zero,one,dp))%mod;
          dp[l]=count;
          return count;

    } 
    int countGoodStrings(int low, int high, int zero, int one) {
        int ans =0;
        vector<int> dp(high+1,-1);
        return counter(0,low,high,zero,one,dp);
        
    }
};