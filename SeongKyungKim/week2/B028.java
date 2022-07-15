class Solution {
    public int arrangeCoins(int n) {
        
        int result = 0;
        int num = n;
        
        for(int i=1; i<num; i++) {
            n -= i;
            if(n == 0) return i;
            else if(n > 0 && n-i-1 < i+1) return i;
            
        }
        return result;
        
    }
}
