class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
            int n = nums1.size();
        vector<pair<int,int>> zip(n);
    
        for(int i=0;i<n;i++) zip[i] = {nums2[i],nums1[i]};
        sort(zip.begin(), zip.end());    

       priority_queue<int,vector<int>,greater<int>> pq;
       long long s=0,ans=0;
       for (int i= n-1;i>=0;--i) {
          pq.push(zip[i].second);
          s+=zip[i].second;
          if(pq.size()>k){
            s-=pq.top();
            pq.pop();
          }
          if(pq.size() == k)ans = max(ans,s*(zip[i].first));
          }
          return ans;
       
    }
};