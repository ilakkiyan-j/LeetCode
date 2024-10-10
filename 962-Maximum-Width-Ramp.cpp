class Solution {
public:
    int maxWidthRamp(vector<int>& arr) {
       
        int ans = 0;
         int i=0,n=arr.size();
         vector<int> st;
         for(int i=0;i<n;i++){
            if(st.empty() || arr[st.back()]>arr[i])st.push_back(i);
         }
        for(int k=n-1;k>=0;k--){
            while(!st.empty() && arr[st.back()]<=arr[k]){
                ans = max(ans,k-st.back());
                st.pop_back();
            }
        }
        
    
        return ans;
    }
};