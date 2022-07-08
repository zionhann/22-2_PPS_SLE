#include <vector>
#include <algorithm>

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int cnt = 0;
        int i = 0, j = 0;
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        reverse(g.begin(), g.end());
        reverse(s.begin(), s.end());
        
        while(i < g.size() && j < s.size())
        {
            if(s[j] >= g[i])
            {
                cnt++;
                j++;
                i++;
            }
            else
                i++;
        }
        return cnt;
    }
};
