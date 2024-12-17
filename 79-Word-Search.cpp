class Solution {
public:
    bool SearchWord(vector<vector<char>>& board,int x,int y,int n, int m, string word, int idx){
        if(x<0 || x>=n || y<0 || y>=m)return false;
        if(board[x][y]!=word[idx])return false;
        if(idx==word.length()-1)return true;
        char temp = board[x][y];
        board[x][y]='.';
        bool found = SearchWord(board,x+1,y,n,m,word,idx+1) ||
                     SearchWord(board,x-1,y,n,m,word,idx+1) ||
                     SearchWord(board,x,y-1,n,m,word,idx+1) ||
                     SearchWord(board,x,y+1,n,m,word,idx+1) ;
        board[x][y]=temp;
        return found;


    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int x=0;x<n;x++){
            for(int y=0;y<m;y++){
                if(word[0]==board[x][y] && SearchWord(board,x,y,n,m,word,0))
                return true;
            }
        }
        return false;
    }
};