class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int[][] newMat = new int[r][c];
        
        int row = mat.length;
        int column = mat[0].length;
        
        int[] nums = new int[row*column];
        
        if(row*column != r*c) return mat;
        else {
            int k=0;
            for(int i=0; i<row; i++) {
                for(int j=0; j<column; j++) {
                    nums[k] = mat[i][j];
                    k++;
                }
            }
            
            k=0;
            for(int i=0; i<r; i++) {
                for(int j=0; j<c; j++) {
                    newMat[i][j] = nums[k];
                    k++;
                }
            }
            return newMat;
        }     
    }
}
