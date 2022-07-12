/**
 * @author zionhann
 * @date 2022-07-12
 * @title 389. Find the Difference
 * @from https://leetcode.com/problems/find-the-difference/
 * @elapsed_time 8min
 */

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        
        for (char el : t) {
            size_t pos = s.find(el);
            
            if (pos == string::npos) {
                ans = el;
                break;
            }
            s.erase(pos, 1);
        }
        return ans;
    }
};