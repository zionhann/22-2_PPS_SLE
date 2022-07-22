/**
 * @author zionhann
 * @date 2022-07-21
 * @title 14. Longest Common Prefix
 * @from https://leetcode.com/problems/longest-common-prefix/
 * @elapsed_time 20min
 * @runtime 15 ms 10.77%
 * @memory_usage 9.2 MB 81.22%
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs.front();
        
        for (int i = 1; i < strs.size(); ++i) {
            string& str = strs[i];
            int j = 0;
            
            while (j < ans.size()) {
                if (j == str.size() || ans[j] != str[j]) {
                    ans.erase(j);
                    break;
                }
                j += 1;
            }
        }
        return ans;
    }
};