/**
 * @author zionhann
 * @date 2022-07-20
 * @title 228. Summary Ranges
 * @from https://leetcode.com/problems/summary-ranges/
 * @elapsed_time 45+min
 * @runtime 3 ms 42.07%
 * @memory_usage 6.8 MB 73.58%
 * @ref 
 * aryanttripathi, "[C++]| Detailed Explanation w/ DRY RUN | Faster than 100%| Basic Concept Used," LeetCode, Feb. 28, 2022. 
 * [Online]. Available: https://leetcode.com/problems/summary-ranges/discuss/1805583/C%2B%2Bor-Detailed-Explanation-w-DRY-RUN-or-Faster-than-100or-Basic-Concept-Used
 */

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int size = nums.size();
        vector<string> ans;
        string str;
        
        for (int start = 0; start < size; ++start) {
            int last = start;
            
            while (last+1 < size && nums[last+1] == nums[last]+1) {
                last += 1;
            }
            
            if (start == last) {
                str += to_string(nums[start]);
                ans.push_back(str);
            } else {
                str += to_string(nums[start]);
                str += "->";
                str += to_string(nums[last]);
                ans.push_back(str);
            }
            start = last;
            str.clear();
        }
        return ans;
    }
};