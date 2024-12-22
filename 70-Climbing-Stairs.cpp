class Solution {
public:


    int climbStairs(int n) {
       vector<int> dp(n+1);
       for(int i=0;i<=n;i++){
           if(i==0){
            dp[i]=1; continue;}
        else if(i==1){
            dp[i]=1;continue;
        }
        else {
            dp[i]=dp[i-1]+dp[i-2];
        }
       }
       return dp[n];
    }
};