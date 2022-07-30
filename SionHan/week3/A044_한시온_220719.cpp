/**
 * @author zionhann
 * @date 2022-07-19
 * @title 551. Student Attendance Record I
 * @from https://leetcode.com/problems/student-attendance-record-i/
 * @elapsed_time 28min
 * @runtime  2 ms 56.45%
 * @memory_usage 6.3 MB 49.53%
 */

class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0, late = 0;
        
        for (char state : s) {
            if (state == 'L') {
                late += 1;
                
                if (late == 3) {
                    return false;
                }
            } else {
                if (late > 0) {
                    late = 0;
                }
                
                if (state == 'A') {
                    absent += 1;
                }
            }
        }
        return absent < 2 && late < 3;
    }
};