N = int(input())
x = int(input())

if N <= 5:
    for i in range(N-1):
        x = int(not x)
        print(x)

else:
    print("Love is open door\n")
