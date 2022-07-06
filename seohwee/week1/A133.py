class Solution(object):
    def capitalizeTitle(self, title):
        cap = title.title().split()
        for i in range(len(cap)):
            if len(cap[i]) < 3:
                cap[i] = cap[i].lower()
        return " ".join(cap)
