public int numWaterBottles(int numBottles, int numExchange) {
        int full = numBottles;
        int res=0;
        while(full>0){
            if(full>=numExchange){
            res+=full-full%numExchange;
            full=full/numExchange + full % numExchange;
            }
            else{
                res+=full;
                full=0;
            }

        }
        return res;

    }
