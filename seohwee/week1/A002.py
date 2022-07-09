class Solution(object):
    def generate(self, numRows):
        array = [[1]]
        triangle = [1, 1]
        
        for i in range(numRows-1):
            array.append(triangle)
            s = [1]
            
            for j in range(len(triangle)-1):
                s.append(triangle[j] + triangle[j+1])
            s.append(1)
            triangle = s
        return array
