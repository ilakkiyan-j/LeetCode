class Solution {
public:
    int minAddToMakeValid(string s) {
        int op =0;
        int cl =0;
        int n = s.length();
        
        for(int i=0;i<n;i++){
           if(s[i] == '(')op++;
           else {
             if(op>0)op--;
             else cl++;
           }
        }
        return op+cl;
    }
};