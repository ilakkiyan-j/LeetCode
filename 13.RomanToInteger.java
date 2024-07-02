class RomanToInteger {
    public int IntVal(char c){
        if(c=='I') return 1;
        if(c=='V')return 5;
        if(c=='X')return 10;
        if(c=='L')return 50;
        if(c=='C')return 100;
        if(c=='D') return 500;
        if(c=='M')return 1000;
        return -1;
    }
    public int romanToInt(String s) {
        int n = s.length();
          int ans =0;
       for(int i = 0; i < n; i++) {
            int cur = IntVal(s.charAt(i));
            if(i + 1 < n) {
                int nxt = IntVal(s.charAt(i + 1));
                if(cur >= nxt) {
                    ans += cur;
                } else {
                    ans += nxt - cur;
                    i++; 
                }
            } else {
                ans += cur;
            }
        }
        return ans;
    }
}
