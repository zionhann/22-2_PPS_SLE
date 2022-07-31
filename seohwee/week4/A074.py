class Solution(object):
    def isPalindrome(self, s):
        str1 =""
        for i in s:
            if i.isalnum():
                str1 +=i.lower()
            else:
                continue
        return str1 == str1[::-1]
