class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> prefix(n,0);
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1];
            if((nums[i-1]%2==0 && nums[i]%2==0) || (nums[i-1]%2!=0 && nums[i]%2!=0))
            prefix[i]++;
        }
        vector<bool> ans;
        for(auto& q: queries){
            int l = q[0],r=q[1];
            int c = prefix[r]-(l>0 ? prefix[l] : 0);
            ans.push_back(c==0);
        }
        return ans;
    }
};