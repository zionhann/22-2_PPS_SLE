class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a = "";
        string b = "";
        
        for(int i = 0; i < s.length(); i++) {
            if(!a.empty() && s[i] == '#') a.pop_back();
            if(s[i] != '#') a.push_back(s[i]);
        }
        for(int j = 0; j < t.length(); j++) {
            if(!b.empty() && t[j] == '#') b.pop_back();
            if(t[j] != '#') b.push_back(t[j]);
        }
        return a.compare(b) == 0 ? true : false;
    }
};