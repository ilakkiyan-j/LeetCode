class Solution {
public:
    bool search(vector<int>& nums, int x, int y, int& target){
        if(x>y)return false;
        int mid = x+(y-x)/2;
        if(nums[mid]==target)return true;
        else if(nums[mid]<target)return search(nums,mid+1,y,target);
        else return search(nums,x,mid-1,target);
        
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            if(target >= matrix[i][0] && target<= matrix[i][m-1])
               return search(matrix[i],0,m-1,target);
        }
        return false;
    }
};