class Solution {
public:
    bool halvesAreAlike(string s) {
        
        string a = s.substr(0, s.length()/2);
        string b = s.substr(s.length()/2, s.length());
        
        int acnt = 0, bcnt = 0;
        for(int i = 0; i < a.length(); i++) {
            switch(tolower(a[i])) {
                case 'a' :
                case 'e' :
                case 'i' :
                case 'o' :
                case 'u' : acnt++; break;
                default : break;
            }
            switch(tolower(b[i])) {
                case 'a' :
                case 'e' :
                case 'i' :
                case 'o' :
                case 'u' : bcnt++; break;
                default : break;
            }
        }
        return acnt == bcnt ? true : false;
    }
};