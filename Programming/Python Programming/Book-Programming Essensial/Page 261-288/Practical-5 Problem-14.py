# Problem Name: Program to display the pattern below.
num = 1
incr = 1
for i in range(0, 5):
    for j in range(0, incr):
        print(num, end=" ")
        num = num + 1

    print()
    incr = incr + 2
