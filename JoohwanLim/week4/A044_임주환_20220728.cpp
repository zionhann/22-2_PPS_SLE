class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0;
        int countL = 0;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == 'A')
            {
                countA++;
                countL = 0;
            }
            if(s[i] == 'L')
                countL++;
            if(s[i] == 'P')
                countL = 0;
            
            if(countL == 3)
                return false;
                
            if(countA >= 2)
                return false;
        }
        
        return true;
    }
};