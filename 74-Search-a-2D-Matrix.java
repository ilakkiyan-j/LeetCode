class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m = matrix.length;
        int n = matrix[0].length;
        for(int i=0;i<m;i++){
            if(matrix[i][0]<= target && target<=matrix[i][n-1]){
                int index = Arrays.binarySearch(matrix[i],target);
                return index>=0;
            }
        }
        return false;
    }
}