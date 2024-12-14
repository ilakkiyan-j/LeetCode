class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero_count = count(begin(nums),end(nums),0);
        int product =1;
        for(int num : nums) product*= num!= 0 ? num : 1;
        int n = nums.size();
        vector<int> res(n);
        for(int i=0;i<n;i++){
                if(zero_count==1){
                    if(nums[i]==0)res[i]=product;
                    else res[i]=0;
                }else if(zero_count>1){
                    res[i]=0;
                }else{
                    res[i]=product/nums[i];
                }
        } 
        return res;
    }
};