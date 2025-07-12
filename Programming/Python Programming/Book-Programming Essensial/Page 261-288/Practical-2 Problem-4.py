# Problem Name: Conversion of Fahrenheit temperature to Celsius temperature.
fahrenheit = float(input("Please enter the Fahrenheit Temperature:"))
celsius = (fahrenheit-32)/1.8
print('%0.1f degree Fahrenheit is = %0.1f degree Celsius.' %
      (fahrenheit, celsius))
