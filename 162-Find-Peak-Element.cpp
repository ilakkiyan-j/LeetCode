class Solution {
public:
    int getPeak(vector<int>& nums,int x,int y){
        if(x>=y)return x;
         int mid = x + (y-x)/2;
         if(nums[mid]<nums[mid+1])return getPeak(nums,mid+1,y);
         else return getPeak(nums,x,mid);
    }
    int findPeakElement(vector<int>& nums) {
       return getPeak(nums,0,nums.size()-1);
    }
};