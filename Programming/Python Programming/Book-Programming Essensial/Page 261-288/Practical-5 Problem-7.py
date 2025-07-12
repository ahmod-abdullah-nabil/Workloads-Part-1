#Problem Name: A program to sort the words between strings alphabetically.
string = input("Enter a string: ")
words  = string.split()
words.sort()
print("The sorted words are: ")
for words in words:
    print(words)