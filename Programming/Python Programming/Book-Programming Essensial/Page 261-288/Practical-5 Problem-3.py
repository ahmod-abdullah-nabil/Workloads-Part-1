#Problem Name: A program for displaying prime numbers from 1 to 10.
lower =int(input("Enter the lower number:"))
upper =int(input("Enter the upper number:"))

print("prime numbers between",lower,"and",upper,"are:")
for num in range(lower,upper +1):
    # prime numbers are greater than 1
    if num > 1:
        for i in range(2,sum):
            if (num % i) == 0:
                break
            else:
                print(num)