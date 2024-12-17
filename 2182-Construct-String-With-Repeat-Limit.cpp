class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int> occ (26,0);
        priority_queue<pair<char,int>> pq;
      for(char x: s){
         occ[x-'a']++;
      }
      for(int i=0;i<26;i++){
              if(occ[i]>0){
                pq.push({(char)(i+'a'),occ[i]});
              }
      }
      string str;
      while(!pq.empty()){
        auto[ch,oc] = pq.top();
        pq.pop();
        int cur = min(repeatLimit,oc);
        str+=string(cur,ch);
        if(oc-cur>0){
             if (!pq.empty()) {
            auto[c,o] = pq.top();
            pq.pop();
            str+=c;
            if(o-1>0)pq.push({c,o-1});
            pq.push({ch,oc-cur});
             }else break;
        }
      }
       return str;
    }
};