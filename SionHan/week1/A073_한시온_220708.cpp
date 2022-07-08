/**
 * @author zionhann
 * @date 2022-07-08
 * @title 412. Fizz Buzz
 * @from https://leetcode.com/problems/fizz-buzz/
 * @elapsed_time 9min
 */

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        
        for (int i = 1; i <= n; i++) {
            if (i % 15 == 0) {
                answer.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                answer.push_back("Fizz");
            } else if (i % 5 == 0) {
                answer.push_back("Buzz");
            } else {
                answer.push_back(to_string(i));
            }
        }
        return answer;
    }
};