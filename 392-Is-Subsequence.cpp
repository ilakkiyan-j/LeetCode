class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<=t.length()){
            if(j>=s.length())return true;
            if(s[j]==t[i])j++;
            i++;
        }
        return j>=s.length();
    }
};