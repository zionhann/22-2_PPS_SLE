class Solution {
public:
    bool isValid(string s){
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else if (!st.empty()) {
                char open = st.top(); st.pop();
                 if ((open == '(' && s[i] != ')') ||
                     (open == '{' && s[i] != '}') ||
                     (open == '[' && s[i] != ']')) {
                     return false;
                 }
            }
            else {
                return false;
            }
        }
        return st.empty();
    }
};
