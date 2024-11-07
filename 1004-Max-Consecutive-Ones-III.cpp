class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0,i=0;
        for(;i<n;i++){
           if(nums[i]==0)k--;
           if(k<0){
           if(nums[l]==0)k++;
           l++;
           }
        }
        return i-l;
    }
};