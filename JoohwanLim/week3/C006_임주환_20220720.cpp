class Solution {
public:
    int firstUniqChar(string s) {
        char x;
        int index;
        vector <bool> unique(s.length(), true);
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            x = s[i];
            index = i;
            if(unique[i] == true)
                for(int j = i + 1 ; j < s.length() ; j++)
                {
                    if(s[i] == s[j])
                    {
                        unique[i] = false;
                        unique[j] = false;
                    }
                }
            if(unique[i] == true)
                return index;
        }
        return -1;
    }
};