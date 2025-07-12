#Problem Name: Find the sum of its digits with a number input.
sum = 0
Number = int(input("please enter the value number"))
while Number > 0:
    X = Number%10
    Number =Number//10
    sum = sum+X
    print("summation of the degits is =  ",sum)