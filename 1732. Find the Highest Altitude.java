public int largestAltitude(int[] gain) {
        int max =0;
        int a=0;
        for(int n : gain){
            a+=n;
            max=Math.max(max,a);
        } 
        return max;
    }
