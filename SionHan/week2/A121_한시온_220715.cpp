/**
 * @author zionhann
 * @date 2022-07-15
 * @title 697. Degree of an Array
 * @from https://leetcode.com/problems/degree-of-an-array/
 * @elapsed_time 45+min
 * @ref 
 * lee215, "[Java/C++/Python] One Pass Solution," LeetCode, Oct. 14, 2020. 
 * [Online]. Available: https://leetcode.com/problems/degree-of-an-array/discuss/124317/JavaC%2B%2BPython-One-Pass-Solution
 */

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> counter, index;
        int degree = 0;
        int ans;
        
        for (int i = 0; i < nums.size(); i++) {
            int& val = nums.at(i);
            
            if (index.count(val) == 0) {
                // 값이 map에 없는 경우
                // 배열에서 값의 위치(인덱스)를 기록
                index[val] = i;
            }
            
            if (++counter[val] > degree) {
                // 어떤 값의 개수가 기존 degree 보다 높은 경우
                // degree 갱신
                degree = counter[val];
                ans = i - index[val] + 1;
            } else if (counter[val] == degree) {
                // degree가 같은 값이 두 개 이상인 경우
                // 길이가 작은 값이 정답
                // 0-index이므로 1을 더한다
                ans = min(ans, i - index[val] + 1);
            }
        }
        return ans;
    }
};