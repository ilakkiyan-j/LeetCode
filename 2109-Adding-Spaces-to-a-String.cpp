class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=spaces.size(),m=s.length(); 
        string t(n+m,' ');
        int j=0;
        for(int i=0;i<m;i++){
            if(j<n && i==spaces[j])j++;
            t[i+j]=s[i];
        }
        
        return t;
    }
};