/**
 * @author zionhann
 * @date 2022-07-06
 * @title 1051. Height Checker
 * @from https://leetcode.com/problems/height-checker/
 * @elapsed_time 13min
 */

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int counter = 0;
        vector<int> origin = heights;
        
        sort(heights.begin(), heights.end());
        
        for (int i = 0; i < heights.size(); i++) {
            if (origin.at(i) != heights.at(i)) {
                counter += 1;
            }
        }
        return counter;
    }
};