class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> input1;
        stack <char> input2;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] != '#')
                input1.push(s[i]);
            else if(!input1.empty())
                input1.pop();
        }
        for(int i = 0 ; i < t.length() ; i++)
        {
            if(t[i] != '#')
                input2.push(t[i]);
            else if(!input2.empty())
                input2.pop();
        }
        
        if(input1.size() != input2.size())
            return false;
        
        while(!input1.empty())
        {
            if(input1.top() != input2.top())
                return false;
            
            input1.pop();
            input2.pop();
        }
        return true;
    }
};