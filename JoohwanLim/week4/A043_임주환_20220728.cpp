class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer;
        
        int len;
        
        len = strs[0].length();        
        for(int i = 0 ; i < strs.size() ; i++)
            if(len > strs[i].length())
                len = strs[i].length();
        
        for(int i = 0 ; i < len ; i++)
        {
            bool check = true;
            
            for(int j = 0 ; j < strs.size() ; j++)
            {
                if(strs[0][i] != strs[j][i])
                {
                    check = false;
                    break;
                }
            }
            
            if(check == true)
                answer += strs[0][i];
            if(check == false)
                break;
        }
        
        return answer;
    }
};