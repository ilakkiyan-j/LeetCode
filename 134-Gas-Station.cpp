class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int t_cost = 0;
        int t_gas = 0;
        for(int i=0;i<n;i++){
            t_cost+=cost[i];
            t_gas+=gas[i];
        }

        if(t_gas < t_cost)return -1;
        
    int cur =0;
    int start =0;

        for(int i =0;i<n;i++){
            cur += gas[i]-cost[i];
            if(cur < 0){
                cur =0;
                start = i+1;
            }
        }
        return start;
    }
};