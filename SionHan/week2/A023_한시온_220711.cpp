/**
 * @author zionhann
 * @date 2022-07-11
 * @title 258. Add Digits
 * @from https://leetcode.com/problems/add-digits/
 * @elapsed_time 24min
 */

class Solution {
public:
    int addDigits(int num) { 
        if (num < 10) {
            return num;
        }
        num = addDigits(num/10) + num % 10;
        return (num < 10) ? num : addDigits(num);
    }
};