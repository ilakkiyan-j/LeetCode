class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set s(begin(wordList),end(wordList));
        if(s.find(endWord) == s.end())return 0;

        queue<string> q;
        q.push(beginWord);

        set<string> vis;
        vis.insert(beginWord);
       
       int changes =1;

        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                string word = q.front();
                q.pop();
                if(word == endWord)return changes;
                for(int j=0;j<word.length();j++){
                      char originalChar = word[j];
                    for(char k ='a';k<='z';k++){
                         if (k == originalChar) continue;
                        word[j] = k;
             if(s.find(word)!=s.end() && vis.find(word)==vis.end()){
                  q.push(word);
                vis.insert(word);
                  }
                    }
                    word[j] = originalChar; 
                }
            }
            ++changes;
        }
        return 0;
    }
};