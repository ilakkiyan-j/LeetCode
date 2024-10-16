class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flip =0;
        while(a>0 || b>0 || c>0){
            int A = a & 1;
            int B = b & 1;
            int C = c & 1;
            if(C==0){
                flip+=(A+B);
            }
            else{
                if(A==0 && B==0){
                    flip++;
                }
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return flip;
    }
};