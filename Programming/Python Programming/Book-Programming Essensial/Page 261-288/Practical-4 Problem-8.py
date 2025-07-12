#Problem Name: Value determination of Fibonacci Sequence.
Terms = int(input("how many terms: "))
n1 = 0
n2 = 1
count = 0
if Terms <= 0:
    print("please enter a positive numebr")
elif Terms == 1:
    print("Fibonacci sequence upto",Terms,":")
    print(n1)
else:
    print("Fibonacci sequence upto",Terms,":")
    while count < Terms:
        print(n1,end=',')
        nth = n1+n2
        n1 = n2
        n2 = nth
        count += 1