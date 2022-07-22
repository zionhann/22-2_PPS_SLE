/**
 * @author zionhann
 * @date 2022-07-21
 * @title 342. Power of Four
 * @from https://leetcode.com/problems/power-of-four/
 * @elapsed_time 5min
 * @runtime 5 ms 22.79%
 * @memory_usage 5.8 MB 70.80%
 */

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) {
            return true;
        } else if (n == 0) {
            return false;
        } else if (n % 4 == 0) {
            return isPowerOfFour(n/4);
        } 
        return false;
    }
};