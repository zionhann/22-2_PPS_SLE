/**
 * @author zionhann
 * @date 2022-07-07
 * @title 1047. Remove All Adjacent Duplicates In String
 * @from https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
 * @elapsed_time 45+min
 *  
 */

class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        
        for (char el : s) {
            if (result.empty()) {
                result.push_back(el);
            } else if (result.back() == el) {
                result.pop_back();
            } else {
                result.push_back(el);
            }
        }
        return result;
    }
};