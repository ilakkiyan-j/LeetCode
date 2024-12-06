class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> ban(banned.begin(),banned.end());
        int sum=0;
        int c=0;
        for(int i=1;i<=n;i++){
            if(ban.count(i))continue;
            sum+=i;
            if(sum<=maxSum) c++;
            if(sum>maxSum)break;
        }
        return c;
    }
};