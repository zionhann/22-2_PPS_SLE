class Solution(object):
    def relativeSortArray(self, arr1, arr2):
        a=[]
    
        for i in arr2:
            for j in range(len(arr1)):
                if arr1[j]==i:
                    a.append(arr1[j])
    
        for i in sorted (arr1):
            if i not in arr2:
                a.append(i)
        return a 
