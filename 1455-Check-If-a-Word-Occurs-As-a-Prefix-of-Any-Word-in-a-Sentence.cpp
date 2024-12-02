class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int c=0;
        int n = searchWord.length();
        if(n>sentence.length())return -1;
        stringstream s(sentence);
        string str;

        while(getline(s,str,' ')){
             int t = str.length();
             c++;
             if(t<n)continue;
             if(searchWord==str.substr(0,n))return c;
        }
        return -1;
    }
};