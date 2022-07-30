/**
 * @author zionhann
 * @date 2022-07-21
 * @title 125. Valid Palindrome
 * @from https://leetcode.com/problems/valid-palindrome/
 * @elapsed_time 45+min
 * @runtime 11 ms 35.44%
 * @memory_usage 7.4 MB  76.48%
 */

class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(),
                          s.end(), 
                          [](const char& c) -> bool { return !isalnum(c); }
                         ), s.end()
               );
        
        for (char& c : s) {
            c = tolower(c);
        }
        
        int size = s.size();
        
        for (int i = 0; i < size/2; ++i) {
            if (s[i] != s[size-1-i]) {
                return false;
            }
        }
        return true;
    }
};