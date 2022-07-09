class Solution(object):
    def plusOne(self, digits):
        digits = list(map(str, digits))
        n = int("".join(digits))
        
        n += 1
        n=list(str(n))
        
        return list(map(int, n))
