class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int i=0,j=nums.size()-1;
        int c=0;
        while(i<j){
         if(nums[i]+nums[j]==k){
            i++;
            c++;
            j--;
         }
         else if(nums[i]+nums[j]<k){
              i++;
         }
         else{
            j--;
         }
        }
        return c;
    }
};