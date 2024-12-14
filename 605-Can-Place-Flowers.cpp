class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c =0, l=flowerbed.size();
        for(int i=0;i<l;i++){
            if((i-1 < 0 || flowerbed[i-1]!=1)&& (flowerbed[i]==0) && 
            ( i+1 >=l  || flowerbed[i+1]!=1)){
                flowerbed[i]=1;
                c++;
            }
        }

        return c>=n;
    }
};