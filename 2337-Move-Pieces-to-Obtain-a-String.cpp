class Solution {
public:
    bool canChange(string start, string target) {
        int i=0,j=0,m=start.length(),n=target.length();

        while(i<m && j<n){
            char a = start[i];
            char b = target[j];
            if(a=='_' && b=='_'){
                i++;
                j++;
            }
            else if(a=='_')i++;
            else if(b=='_')j++;
            else if(a==b &&
            ((a=='L' && i>=j) || (b=='R' && i<=j))
            ){
               i++;
               j++;
            }
            else{
                return false;
            }
        }

        while(i<m && start[i]=='_')i++;
         while(j<n && target[j]=='_')j++;

         return i==m && j==n;
    }
};