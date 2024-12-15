class Solution {
public:
    int trap(vector<int>& height) {
         int i =0,j = height.size()-1;
         int lmax= height[i],rmax=height[j];
         int res=0;
         while(i<j){
            if(lmax<rmax){
                i++;
                lmax = max(lmax,height[i]);
                res+=lmax-height[i];
            }else{
                j--;
                rmax = max(rmax,height[j]);
                res+= rmax-height[j];
            }
         }
         return res;
    }
};