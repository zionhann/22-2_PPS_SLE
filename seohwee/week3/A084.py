S = input()

output = []

for i in range(len(S)):
    output.append(S[i:])

output.sort()

for i in output:
    print(i)
