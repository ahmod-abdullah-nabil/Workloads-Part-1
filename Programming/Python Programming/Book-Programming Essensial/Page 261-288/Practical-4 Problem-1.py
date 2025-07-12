#Problem Name: Take input and detect if its a negative or positive number or 0.
num =float (input ("Enter a number: "))
if num >= 0:
    if num ==0:
        print("It is zero")
    else:
        print("it is a positve number") 
else:
    print("It is a Negative number")