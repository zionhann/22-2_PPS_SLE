class Solution(object):
    def heightChecker(self, heights):
        count = 0
        
        for i in range(len(sorted(heights))):
            if (sorted(heights))[i] != heights[i]:
                count += 1
        return count
