class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int mxSum = nums[0],miSum=nums[0],curMx=0,curMin=0;
        int total=0;
        for(int num : nums){
             curMx = max(curMx+num,num);
             mxSum = max(mxSum,curMx);
             curMin = min(curMin+num,num);
             miSum = min(miSum,curMin);
             total+=num;
        }
        return mxSum >0 ? max(mxSum,total-miSum) : mxSum;
    }
};