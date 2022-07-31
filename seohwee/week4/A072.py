class Solution(object):
    def dayOfYear(self, date):
        mth_days = {1:31, 2:28, 3:31, 4:30, 5:31, 6:30, 7:31, 8:31, 9:30, 10:31, 11:30, 12:31}
        mth = int(date[5:7])
        day = int(date[8:])
        year = int(date[0:4])

        i=1
        j = day

        while i < mth:
            j += mth_days[i]
            i += 1

        if mth <= 2:
            return(j)
        else:
            if year % 4 != 0:
                return(j)
            elif year % 100 != 0:
                return(j+1)
            elif year % 400 != 0:
                return(j)
            else:
                return(j+1)
