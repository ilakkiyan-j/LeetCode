#define OUT 1
#define IN 0
#define NVIS 0
#define VIS 1
class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,bool>>> adj(n);
        for(auto i : connections){
            adj[i[0]].push_back({i[1],OUT});
             adj[i[1]].push_back({i[0],IN});
        }
        vector<bool> vis(n,NVIS);
        int c=0;
        queue<int> q;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(auto i : adj[u]){
                if(vis[i.first] == NVIS){
                    if(i.second == OUT){
                        c++;
                    }
                    q.push(i.first);
                    vis[i.first]=VIS;
                }
            }
        }
        return c;
    }
};