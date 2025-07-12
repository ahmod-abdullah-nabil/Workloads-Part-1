#Problem Name: Program to determine ncR and nPr.
import math 
while True:
     print("enter 'x' for exit.")
     nval = input("enter the value of n:")
     if nval == "x":
          break
     else:
          rval = input("enter the value of r:")
          n = int(nval)
          r = int(rval) 
          npr = math.factorial(n)/math.factorial(n-r)
          ncr = npr/math.factorial(r) 
          print("ncR =",ncr)
          print("npR =",npr)
          print("/n")