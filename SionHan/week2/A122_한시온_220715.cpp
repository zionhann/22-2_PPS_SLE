/**
 * @author zionhann
 * @date 2022-07-15
 * @title 796. Rotate String
 * @from https://leetcode.com/problems/rotate-string/
 * @elapsed_time 23min
 */

class Solution {
public:
    bool rotateString(string s, string goal) {
        int size = s.size();
        bool ans = false;    
        
        while (size--) {
            char e = s.front();
            
            s.erase(s.begin());
            s.push_back(e);
            
            if (s == goal) {
                ans = true;
                break;
            }
        }
        return ans;
    }
};