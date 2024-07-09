 public double averageWaitingTime(int[][] customers) {
          int n = customers.length;
    long t2 = customers[0][0] + customers[0][1]; 
    long res = t2 - customers[0][0]; 
    
    for (int i = 1; i < n; i++) {
        t2 = Math.max(t2, (long) customers[i][0]); 
        t2 += customers[i][1]; 
        res += t2 - customers[i][0]; 
    }
    
    return (double) res / n;
    }
