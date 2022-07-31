class Solution(object):
    def calPoints(self, ops):
        j = []
        for i in ops:
            if i=="D":
                j.append(2*j[-1])
                
            elif i=="C":
                j.pop()
                
            elif i=="+":
                j.append(j[-1]+j[-2])
                
            else:
                j.append(int(i))

        return sum(j)
