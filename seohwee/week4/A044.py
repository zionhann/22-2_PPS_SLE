class Solution(object):
    def checkRecord(self, s):
        return not(s.count('A') >= 2 or s.count('LLL') > 0)
