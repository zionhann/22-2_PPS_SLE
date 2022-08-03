class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        // string *a = new string[n/2];
        // string *b = new string[n/2];
        int counta = 0;
        int countb = 0;


        for(int i = 0; i < n/2; i++){
            // a[i] = s[i];s
            if(s[i] == 97||s[i] == 101||s[i] == 105||s[i] == 111||s[i] == 117||s[i] == 65||s[i] == 69||s[i] == 73||s[i] == 79||s[i] == 85)counta++;
        }
        for(int i = n/2; i < n; i++){
            // b[i] = s[i];
            if(s[i] == 97||s[i] == 101||s[i] == 105||s[i] == 111||s[i] == 117||s[i] == 65||s[i] == 69||s[i] == 73||s[i] == 79||s[i] == 85)countb++;
        }
        
        
        if(counta == countb)return true;
        else return false;
    }
};