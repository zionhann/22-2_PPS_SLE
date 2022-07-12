/**
 * @author zionhann
 * @date 2022-07-12
 * @title 283. Move Zeroes
 * @from https://leetcode.com/problems/move-zeroes/
 * @elapsed_time 45+min
 * @ref 
 * Kurteck, "Simple O(N) Java Solution Using Insert Index," LeetCode, Oct. 26, 2020. 
 * [Online]. Available: https://leetcode.com/problems/move-zeroes/discuss/72011/Simple-O(N)-Java-Solution-Using-Insert-Index
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        
        for (int num : nums) {
            if (num != 0) {
                nums.at(i) = num;
                i += 1;
            }
        }
        
        while (i < nums.size()) {
            nums.at(i) = 0;
            i += 1;
        }
    }
};