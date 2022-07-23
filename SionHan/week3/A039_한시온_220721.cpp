/**
 * @author zionhann
 * @date 2022-07-21
 * @title 367. Valid Perfect Square
 * @from https://leetcode.com/problems/valid-perfect-square/
 * @elapsed_time 34min
 * @runtime 0 ms 100.00%
 * @memory_usage 6 MB 16.80% 
 */

class Solution {
public:
    bool isPerfectSquare(int num) {
        int ps = 0;
        
        for (int i = 0; i <= (num-ps)/2; ++i) {
            ps = ps + (2*i+1);
            
            if (ps == num) {
                return true;
            }
        }
        return false;
    }
};