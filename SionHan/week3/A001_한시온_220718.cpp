/**
 * @author zionhannz
 * @date 2022-07-18
 * @title 455. Assign Cookies
 * @from https://leetcode.com/problems/assign-cookies/
 * @elapsed_time 45+min
 * @runtime 46ms (42.90%)
 * @memory_usage 17.5MB  (31.48%)
 * @ref 
 * IamXiaoBai, "Easy Understanding C++ solution O(nlogn)," LeetCode, Sep. 11, 2018. 
 * [Online]. Available: https://leetcode.com/problems/assign-cookies/discuss/93991/Easy-Understanding-C%2B%2B-solution-O(nlogn)
 */

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int i = 0;
        
        for (int j = 0; i < g.size() && j < s.size(); ++j) {
            if (s[j] >= g[i]) {
                i += 1;
            }
        }
        return i;
    }
};