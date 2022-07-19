class Solution {
public:
    string reverseWords(string s) {
        stack <char> str;
        string output;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(isspace(s[i]) != 0)
            {
                while(!str.empty())
                {
                    output += str.top();
                    str.pop();
                }
                output += ' ';
            }
            else
                str.push(s[i]);
        }
        while(!str.empty())
        {
            output += str.top();
            str.pop();
        }
        return output;
    }
};