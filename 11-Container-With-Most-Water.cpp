class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxArea = min(height[i],height[j])*j-i; 
        while(i<j){
            
            maxArea = max(min(height[i],height[j]) * (j-i),maxArea);
            if(height[i]<height[j])i++;
            else j--;
            
        }
        return maxArea;
    }
};