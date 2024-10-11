class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
         int n = times.size();
         vector<int> chairs(n,-1);
         int tar = times[targetFriend][0];
         sort(begin(times),end(times));
         for(vector<int>& time : times){
            int ar = time[0];
            int de = time[1];
            for(int i=0;i<n;i++){
                if(chairs[i]<=ar){
                    chairs[i]=de;
                    if(ar == tar)return i;
                    break;
                }
                
            }
         }
         return -1;
    }
};