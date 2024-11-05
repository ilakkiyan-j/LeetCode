class Solution {
    public int maxOperations(int[] nums, int k) {
        int c=0;
        int i=0,j=nums.length-1;
        Arrays.sort(nums);
        while(i<j){
          if(nums[i]+nums[j]==k){
            c++;i++;j--;
          }
          else if(nums[i]+nums[j] < k){
            i++;
          }
          else{
            j--;
          }
        }
         return c;
    }
}