#Problem Name: A program for calculating the number of vowels in a string.
vowels = 'aeiou'
string = input("Enter a string: ")
string = string.casefold()
count =  {}.fromkeys(vowels,0)

for char in string:
    if char in count:
        count[char] += 1
        print(count) 