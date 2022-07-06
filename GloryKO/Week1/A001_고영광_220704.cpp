class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end(), greater<int>()) ;
        sort(s.begin(), s.end(), greater<int>()) ;
        int cnt = 0 ;
        
        while(g.size() != 0 && s.size() != 0)
        {
            if(g.back() <= s.back())
            {
                g.pop_back() ;
                s.pop_back() ;
                cnt++ ;
            }
            else
                s.pop_back() ;
        }
        
        return cnt ;
    }
};