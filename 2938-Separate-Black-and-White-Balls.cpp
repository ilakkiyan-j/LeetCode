class Solution {
public:
    long long minimumSteps(string s) {
        long long st =0;
       int white =0;
       int n = s.length();
     
       for(int i=0;i<n;i++){
          if(s[i]=='1')white++;
          else st+=white;
       }
       return st;
    }
};