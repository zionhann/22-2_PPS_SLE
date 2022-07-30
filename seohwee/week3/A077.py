jumsu = []
for i in range (8):
    jumsu.append(int(input()))

result = sorted(jumsu,reverse=True)

result_idx = []

for i in result[:5]:
    result_idx.append(jumsu.index(i)+1) 

print(sum(result[:5]))
result_idx.sort()
print(*result_idx) 
