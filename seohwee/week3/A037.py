class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        sd = []
        
        while left <= right:
            i = left
            
            while i != 0 and i % 10 != 0:
                if left % (i % 10) == 0:
                    i = i // 10
                else:
                    break
            if i == 0:
                sd.append(left)
            left += 1
        return sd
