class Solution {
public:
    bool halvesAreAlike(string s) {
        int first = 0;
        int second = 0;
        int len;
        
        string first_s;
        string second_s;
        
        len = s.length() / 2;
        
        first_s = s.substr(0, len);
        second_s = s.substr(len, s.length());
        
        for(int i = 0 ; i < len ; i++)
        {
            first_s[i] = tolower(first_s[i]);
            second_s[i] = tolower(second_s[i]);
            
            if(first_s[i] == 'a' || first_s[i] == 'e' || first_s[i] == 'i' || first_s[i] == 'o' || first_s[i] == 'u')
                first++;
            
            if(second_s[i] == 'a' || second_s[i] == 'e' || second_s[i] == 'i' || second_s[i] == 'o' || second_s[i] == 'u')
                second++;
        }
        
        if(first == second)
            return true;
        else
            return false;
    }
};