/**
 * @author zionhann
 * @date 2022-07-21
 * @title 20. Valid Parentheses
 * @from https://leetcode.com/problems/valid-parentheses/
 * @elapsed_time 21min
 * @runtime 3 ms 45.59%
 * @memory_usage 6.2 MB 79.90%
 */

class Solution {
public:
    bool isValid(string s) {
        const string round = "()";
        const string curly = "{}";
        const string square = "[]";
        stack<char> stack;
        
        if (s.size() & 1) {
            return false;
        }
        
        for (char& c : s) {
            if (c == '(' || c == '{' || c== '[') {
                stack.push(c);
            } else if (stack.empty()) {
                return false;
            } else {
                string brackets(1, stack.top());
                
                brackets.push_back(c);
                
                if (brackets == round || brackets == curly || brackets == square) {
                    stack.pop();
                } else {
                    return false;
                }
            }
        }
    return stack.empty();
    }
};