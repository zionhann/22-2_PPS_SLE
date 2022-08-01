class Solution {
    public boolean isPowerOfFour(int n) {
        boolean isPower = true;
        
        if(n<=0) isPower = false;
        else{
            while(n!=1){
            if(n%4!=0) {
                isPower= false;
                break;
                }
            n = n/4;
            }
        }   
        return isPower;
        
    }
}
