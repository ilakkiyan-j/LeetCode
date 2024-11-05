class Solution {
public:
    int maxVowels(string s, int k) {
        int c=0;
        for(int i=0;i<k;i++)  if(s[i]=='a' || s[i] == 'e' || s[i]=='o' || s[i]=='u' || s[i]=='i')c++;
         int mx =c;
         for(int i =k;i<s.length();i++){
            if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='e')c++;
            if(s[i-k]=='a' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u' || s[i-k]=='e')c--;
            mx = max(mx,c);
         }
         return mx;
         
         }
};