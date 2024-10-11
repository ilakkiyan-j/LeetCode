class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int p1 =nums[0];
        int p2=0;
        for(int i=1;i<n;i++){
            
                int pick = nums[i];if(i>1)pick+=p2;
                int notPick = p1;
                int cur = max(pick,notPick);
                p2=p1;
                p1=cur;
            
        }
        return p1;
    }
};