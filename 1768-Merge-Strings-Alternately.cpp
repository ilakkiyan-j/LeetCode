class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int n = word1.length();
        int m = word2.length();
        string s((n+m),' ');
        int i=0,j=0,k=0;

        while(j<n && j<m){
            s[i++]=word1[j++];
            s[i++]=word2[k++];
        }

        while(j<n)s[i++]=word1[j++];
        while(k<m)s[i++]=word2[k++];

        return s;
        

    }
};