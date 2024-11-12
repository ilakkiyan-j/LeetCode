class Solution {
public:


static bool comparator(vector<int>& a, vector<int>& b) {
    
    return a[0] < b[0];
}

vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
    
    sort(items.begin(), items.end(), comparator);
    
 
    map<int, int> maxBeauty;
    int currentMaxBeauty = 0;

  
    for (auto& item : items) {
        currentMaxBeauty = max(currentMaxBeauty, item[1]);
        maxBeauty[item[0]] = currentMaxBeauty;
    }

    
    vector<int> ans;
    for (int query : queries) {
        
        auto it = maxBeauty.upper_bound(query);
        if (it == maxBeauty.begin()) {
            ans.push_back(0); 
        } else {
            --it;
            ans.push_back(it->second);
        }
    }

    return ans;
}

};