/**
 * @author zionhann
 * @date 2022-07-16
 * @title 860. Lemonade Change
 * @from https://leetcode.com/problems/lemonade-change/
 * @elapsed_time 45+min
 * @ref 
 * lee215, "[C++/Java/Python] Straight Forward," LeetCode, Sep. 18, 2019. 
 * [Online]. Available: https://leetcode.com/problems/lemonade-change/discuss/143719/C%2B%2BJavaPython-Straight-Forward
 */

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        
        for (int bill : bills) {
            if (bill == 5) {
                five += 1;
            } else if (bill == 10) {
                five -= 1;
                ten += 1;
            } else if (ten > 0) {
                ten -= 1;
                five -=1;
            }  else {
                five -=3;
            }
            
            if (five < 0) {
                return false;
            }
        }
        return true;
    }
};