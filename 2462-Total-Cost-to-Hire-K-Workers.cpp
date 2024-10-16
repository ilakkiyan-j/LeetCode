class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n = costs.size();
        priority_queue<int, vector<int>, greater<int>> left;
        priority_queue<int, vector<int>, greater<int>> right;
        vector<bool> vis(n, false); 

        int i = 0, j = n - 1;

       
        for (i = 0; i < min(candidates, n); ++i) {
            if (!vis[i]) {
                left.push(costs[i]);
                vis[i] = true;
            }
        }

        for (j = n - 1; j >= max(n - candidates, 0); --j) {
            if (!vis[j]) {
                right.push(costs[j]);
                vis[j] = true;
            }
        }

        long long total = 0;
        i = min(candidates, n);  
        j = max(n - candidates - 1, -1);  

      
        while (k--) {
            if (!left.empty() && !right.empty()) {
                if (left.top() <= right.top()) {
                    total += left.top();
                    left.pop();

                    if (i < n && !vis[i]) {
                        left.push(costs[i]);
                        vis[i] = true;
                        ++i;
                    }
                } else {
                    total += right.top();
                    right.pop();

                    
                    if (j >= 0 && !vis[j]) {
                        right.push(costs[j]);
                        vis[j] = true;
                        --j;
                    }
                }
            } else if (!left.empty()) {
                total += left.top();
                left.pop();
            } else if (!right.empty()) {
                total += right.top();
                right.pop();
            }
        }

        return total;
    }
};
