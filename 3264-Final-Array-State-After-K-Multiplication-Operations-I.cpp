class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> q;
        int n = nums.size();
        for(int x=0;x<n;x++){
            q.push({nums[x],x});
        }
        for(int i=0;i<k;i++){
             auto[num,idx] = q.top();
             q.pop();
              nums[idx]=num*multiplier;
             q.push({nums[idx],idx});
        }

        return nums;
    }
};