n_list = list(map(int, input()))
n_list.sort(reverse=True)

for i in n_list:
    print(i, end='')
