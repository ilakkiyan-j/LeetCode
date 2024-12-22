class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> occ(26,0);
        for(int i=0;i<magazine.length();i++){
               occ[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++){
               occ[ransomNote[i]-'a']--;
               if(  occ[ransomNote[i]-'a']<0)return false;
        }
        return true;
    }
};