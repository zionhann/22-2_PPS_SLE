class Solution {
public:
    bool checkRecord(string s) {
      
        int a = 0;
        int l = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] =='P'){
                l = 0;
                continue;
            }
            else if(s[i] == 'A'){
                a++;  
                l = 0;
            }
            else if(s[i] == 'L')l++;
            
            if(l == 3)return false;
        }
        if(a>=2 ||l>=3)return false;
        else return true;
    }
};