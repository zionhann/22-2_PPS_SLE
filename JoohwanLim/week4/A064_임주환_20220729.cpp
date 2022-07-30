class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> sorting;
        int answer = 0;
        
        sorting = heights;
        sort(sorting.begin(), sorting.end());
        
        for(int i = 0 ; i < heights.size() ; i++)
            if(heights[i] != sorting[i])
                answer++;
        
        return answer;
    }
};