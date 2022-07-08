/**
 * @author zionhann
 * @date 2022-07-08
 * @title 496. Next Greater Element I
 * @from https://leetcode.com/problems/next-greater-element-i/
 * @elapsed_time 38min
 */

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        for (int num : nums1) {
            auto j = find(nums2, num);
            
            if (nums2.end() == next(j)) {
                ans.push_back(-1);
            } else {
                while (j != nums2.end()) {
                    if (num < *j) {
                        ans.push_back(*j);
                        break;
                    }
                    j = next(j);
                }
                if (j == nums2.end()) {
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
    vector<int>::iterator find(vector<int>& v, int value) {
        vector<int>::iterator j;
        
        for (auto iter = v.begin(); iter != v.end(); ++iter) {
            if (*iter == value) {
                j = iter;
                break;
            }
        }
        return j;
    }
};