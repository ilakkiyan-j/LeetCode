class Solution {
public:
    string compressedString(string word) {
        int i=1;
        int n = word.length();
        string s="";
        int c=1;
        char ch = word[0];
        while(i<n){
            if(word[i]==ch && c<9){
                c++;
            }
            else{
                s+= to_string(c);
                s+=ch;
                ch = word[i];
                c=1;
            }

            i++;
        }
        s+=to_string(c);
        s+=ch;
        return s;
    }
};