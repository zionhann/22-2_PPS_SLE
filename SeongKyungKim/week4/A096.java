public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int num = Integer.bitCount(n);
        return num;
        
    }
}
