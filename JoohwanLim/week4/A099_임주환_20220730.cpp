class Solution {
public:
    bool isValid(string s) {
        stack <char> bracket;
        bool answer = true;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(bracket.empty() && (s[i] == ')' || s[i] =='}' || s[i] == ']'))
                return false;
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                bracket.push(s[i]);
                continue;
            }
            if(i != 0)
            {
                if(s[i] == ')' && bracket.top() == '(')
                {
                    bracket.pop();
                    continue;
                }
                if(s[i] == '}' && bracket.top() == '{')
                {
                    bracket.pop();
                    continue;
                }
                if(s[i] == ']' && bracket.top() == '[')
                {
                    bracket.pop();
                    continue;
                }
            }
            bracket.push(s[i]);
        }
        if(!bracket.empty())
            answer = false;
        
        return answer;
    }
};