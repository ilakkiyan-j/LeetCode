class Solution {
public:
    int candy(vector<int>& ratings) {
        int i=1,sum=1;
        int n = ratings.size();
        while(i<n){
            if(ratings[i]==ratings[i-1]){
                sum++; i++; continue;
            }
            int peak=1;
            while(i<n && ratings[i]>ratings[i-1]){
              i++;peak++;sum+=peak;
            }
            int down=1;
            while(i<n && ratings[i]<ratings[i-1]){
               sum+=down; i++;down++;
            }
            if(down>peak)sum+=down-peak;
        }
        return sum;
    }
};