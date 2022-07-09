class Solution(object):
    def backspaceCompare(self, s, t):
        def str(s):
            result = ''
            for a in s:
                if a == '#':
                    if len(result) > 0: result = result[:-1]
                else: 
                    result += a
            return result
        return str(s) == str(t)
        
