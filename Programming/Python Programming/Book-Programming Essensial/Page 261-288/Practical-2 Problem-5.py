# Problem Name: Conversion of kilometer to mile.
kilometers = float(input("Enter value in kilometers: "))
conv_fac = 0.621371
miles = kilometers * conv_fac
print('%0.3f kilometer is = %0.3f miles' % (kilometers, miles))
