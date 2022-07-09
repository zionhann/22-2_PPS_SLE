class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int answer = 0;
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        for(int i=0, j=0; j<s.size(); j++){
            if(i==g.size()) break;
            if(s[j] >= g[i]){
                i++;
                answer++;
            }
        }
        return answer;
    }
};
