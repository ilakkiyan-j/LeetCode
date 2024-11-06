
class Solution {
public:
    bool canSortArray(vector<int>& arr) {
         int n = arr.size();
        for(int i=0;i<n;i++){
            for(int j = 0;j<n-1;j++){
                if(arr[j]>arr[j+1] && __builtin_popcount(arr[j]) == __builtin_popcount(arr[j+1]))swap(arr[j],arr[j+1]);

            }
        }
        for(int i=0;i<n-1;i++)if(arr[i]>arr[i+1])return false;

        return true;
    }
};