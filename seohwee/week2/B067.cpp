class Solution {
public:
    string reverseWords(string s) {
        
        int a=0, b=0;

        while(a < s.size()){
            while(b < s.size() && s[b] != ' '){
                b++;
            }
            reverse(s.begin()+a, s.begin()+b);
            a=b+1;
            b=a;
        }
        return s;
    }
};
