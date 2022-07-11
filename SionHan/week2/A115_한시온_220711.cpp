/**
 * @author zionhann
 * @date 2022-07-11
 * @title 1189. Maximum Number of Balloons
 * @from https://leetcode.com/problems/maximum-number-of-balloons/
 * @elapsed_time 45+min
 */

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        const string form = "balloon";
        int ans = 0;
        
        while (true) {
            for (char el : form) {
                size_t pos = text.find(el);
                
                if (pos == string::npos) {
                    return ans;
                }
                text.erase(pos, 1);
            }
            ans += 1;
        }
        return ans;
    }
};