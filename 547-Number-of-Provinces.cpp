class Solution {
public:

    void dfs(vector<vector<int>>& adj,int st,vector<int>& vis){
        vis[st]=1;
       for (int n = 0; n < adj.size(); n++) {
        if (adj[st][n] == 1 && !vis[n]) {
            dfs(adj, n, vis);
        }
    }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n,0);
        int pro =0;
        for(int i=0;i<n;i++){
        if(!vis[i]){
           pro++;
           dfs(isConnected,i,vis);
        }
        }
        return pro;
    }
};