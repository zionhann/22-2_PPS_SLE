/**
 * @author zionhann
 * @date 2022-07-09
 * @title 169. Majority Element
 * @from https://leetcode.com/problems/majority-element/
 * @elapsed_time 45+min
 * 
 * @ref
 * coderoath, "O(n) time O(1) space fastest solution," LeetCode, Oct. 26, 2018. 
 * [Online]. Available: https://leetcode.com/problems/majority-element/discuss/51613/O(n)-time-O(1)-space-fastest-solution
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums.front();
        int counter = 0;
        
        for (int num : nums) {
            if (ans == num) {
                counter += 1;
            } else if (counter == 0) {
                ans = num;
            } else {
                counter -= 1;
            }
        }
        return ans;
    }
};