class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> st;
        for(int n:arr){
        
            if(st.find(n*2)!=st.end()|| (n % 2 == 0 && st.find(n / 2) != st.end()))return true;
            st.insert(n);
        }
        return false;
    }
};