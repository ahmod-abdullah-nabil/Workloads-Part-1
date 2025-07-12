#Problem Name: Program to show the summation of first 10 squares.
import os
os.system("cls")
total = 0
for i in range (1, 11):
    sq = i*i
    total += sq
print("Sum of the first 10 square is=",total)