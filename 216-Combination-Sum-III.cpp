class Solution {
public:
    void rec(vector<vector<int>>& ans,vector<int>& val,int n,int k,int st){
        if(n==0 && k==0){
            ans.push_back(val);
            return;
        }
        if(k==0)return;
        for(int i=st;i<=9;i++){
            val.push_back(i);
            rec(ans,val,n-i,k-1,i+1);
            val.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
         vector<vector<int>> ans;
         vector<int> val;
         rec(ans,val,n,k,1);
         return ans;
    }
};