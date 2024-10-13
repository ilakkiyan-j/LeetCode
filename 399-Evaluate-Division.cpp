class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& v, vector<vector<string>>& qu) {
        unordered_map<string,vector<pair<string,double>>> adj;
        unordered_set<string> seen;
        int n = eq.size();
        
        
        for(int i = 0; i < n; i++) {
            string t = eq[i][0]; 
            string u = eq[i][1];
            adj[t].push_back({u, v[i]});
            adj[u].push_back({t, 1.0 / v[i]});
            seen.insert(t);
            seen.insert(u);
        }
    
        vector<double> ans;
        
        for(auto& it : qu) {
            string st = it[0], en = it[1];
            
            if(seen.find(st) == seen.end() || seen.find(en) == seen.end()) {
                ans.push_back(-1);
                continue;
            }

            queue<pair<string, double>> q;
            unordered_set<string> vis;
            q.push({st, 1.0});
            vis.insert(st);
            bool found = false;
            double mainAns = -1;

            while(!q.empty()) {
                auto [node, val] = q.front();
                q.pop();
                
                
                if(node == en) {
                    mainAns = val;
                    found = true;
                    break;
                }

                for(auto& [nei, wei] : adj[node]) {
                    if(vis.find(nei) == vis.end()) {
                        vis.insert(nei);
                        q.push({nei, val * wei});
                    }
                }
            }
            
            
            ans.push_back(found ? mainAns : -1);
        }
      
        return ans;
    }
};
