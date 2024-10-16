class Solution {
public:
    bool static compare(vector<int>& a,vector<int>&b){
            return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(begin(intervals),end(intervals),compare);
        int ans =1;
        int initial = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(initial<=intervals[i][0]){
                ans++;
                initial = intervals[i][1];
            }
        }
        return intervals.size()-ans;

    }
};