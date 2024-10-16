class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string res;
        priority_queue<pair<int,char>> maxheap;
        if(a>0)maxheap.push({a,'a'});
        if(b>0)maxheap.push({b,'b'});
        if(c>0)maxheap.push({c,'c'});

        while(!maxheap.empty()){
            auto[count,ch] = maxheap.top();
            maxheap.pop();
            int n = res.size();
            if(n>=2 && res[n-1]==ch && res[n-2]==ch){
                 if(maxheap.empty()) break;

                auto[ncount,nch] = maxheap.top(); maxheap.pop();
                res.push_back(nch);
                ncount--;
                if(ncount>0)maxheap.push({ncount,nch});
            }
            else{
                count--;
                res.push_back(ch);
            }
            if(count>0)maxheap.push({count,ch});
        }
        return res;
    }
};