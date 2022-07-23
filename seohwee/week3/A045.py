word = input().upper()
wlist = list(set(word))

cnt=[]

for i in wlist:
    count = word.count
    cnt.append(count(i))

if cnt.count(max(cnt)) > 1:
    print("?")

else:
    print(wlist[(cnt.index(max(cnt)))])
