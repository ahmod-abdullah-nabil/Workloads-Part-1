#Problem Name: Detect the largest number between three number.
Num1 = float(input("Enter the first number : "))
Num2 = float(input("Enter the second number : "))
Num3 = float(input("Enter the third number : "))

if (Num1>Num2) and (Num1>Num3):
	Largerst = Num1
	print("The Largerst number is: ", Largerst)

elif (Num2>Num1) and (Num2>Num3):
	Largerst = Num2
	print(("The Largerst number is: "), Largerst)

else:
	Largerst= Num3
	print(("The Largerst number is: "), Largerst)