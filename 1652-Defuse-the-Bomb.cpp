class Solution {
public:
   vector<int> decrypt(vector<int>& code, int k) {
    int n = code.size();
    vector<int> ans(n, 0);
    
    if (k == 0) return ans;

    int sum = 0;

    if (k > 0) {
        
        for (int i = 1; i <= k; i++) {
            sum += code[i % n];
        }

        for (int i = 0; i < n; i++) {
            ans[i] = sum;
           
            sum -= code[(i + 1) % n];
            sum += code[(i + k + 1) % n];
        }
    } 
   
    else {
        k = -k; 
        for (int i = n - k; i < n; i++) {
            sum += code[i];
        }

        for (int i = 0; i < n; i++) {
            ans[i] = sum;
           
            sum -= code[(n + i - k) % n];
            sum += code[(n + i) % n];
        }
    }

    return ans;
}

};