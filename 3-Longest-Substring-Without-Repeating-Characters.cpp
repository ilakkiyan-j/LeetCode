class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx =0;
        int st=0;
        int n = s.length();
        map<char,int> mp;
        for(int i=0;i<n;i++){
           if (mp.find(s[i]) != mp.end() && mp[s[i]] >= st) {
                st = mp[s[i]] + 1;
            }
            mp[s[i]] = i;
         
            mx = max(mx, i - st + 1);
        }
        return mx;
    }
};