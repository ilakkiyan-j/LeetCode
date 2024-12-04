class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0;
        int j=0;
        int n = str1.length();
        int m = str2.length();

        while(i<n){
             char c = (str1[i] == 'z') ? 'a' : (str1[i] + 1);
            if(j>=m)return true;
            if(str1[i]== str2[j] || c== str2[j])j++;
            i++;
        }

        return j>=m ? true:false;
    }
};