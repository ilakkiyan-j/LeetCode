class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res ;
        sort(begin(candidates),end(candidates));
        backtrack(candidates,res,{},target,0);
        return res;
    }

    void backtrack(vector<int>& nums,vector<vector<int>>& res,vector<int> list,int  remain, int start){
        if(remain < 0)return;
        if(remain == 0)res.push_back(list);
        else{
            for(int i =start ; i<nums.size();i++){
                list.push_back(nums[i]);
                backtrack(nums,res,list,remain - nums[i],i);
                list.pop_back();
            }
        }
    }
};