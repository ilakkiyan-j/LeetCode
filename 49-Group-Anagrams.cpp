class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;

        for(auto str : strs){
          string word = str;
            sort(begin(word),end(word));
            mp[word].push_back(str);
        }

         vector<vector<string>> ans;
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};