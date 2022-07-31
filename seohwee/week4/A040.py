class Solution(object):
    def halvesAreAlike(self, s):
        vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        
        a = 0
        b = 0
        
        for i in range(len(s)//2):
            if s[i] in vowels:
                a += 1
            if s[len(s)//2 + i] in vowels:
                b += 1
                
        return a == b
