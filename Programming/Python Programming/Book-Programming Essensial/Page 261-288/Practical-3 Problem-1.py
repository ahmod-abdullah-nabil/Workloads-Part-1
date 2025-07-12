# Problem Name: Convert days to months and days.
Days = int(input("please enter the number of days:"))
Month = Days//30
Day = Days % 30
print("Conversion of {0} days= {1}Month and {2} Days" .format(
    Days, Month, Day))
