class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
         vector<vector<int>> res ;
         priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> minHeap;
         int n1 = nums1.size();
         for(int i=0;i<min(k,n1);i++){
            minHeap.push({nums1[i]+nums2[0],{i,0}});
         }
         int c=0;
         while(!minHeap.empty() && c<k){
           int sum = minHeap.top().first;
           int i = minHeap.top().second.first;
           int j = minHeap.top().second.second;
           minHeap.pop();

           res.push_back({nums1[i],nums2[j]});

           int nxt = j+1;
           if(nums2.size() > nxt){
            minHeap.push({nums1[i]+nums2[nxt],{i,nxt}});
           }
           c++;
         }
         return res;
    }
};