# Problem Name: Determine the area and volume of a sphere.
import math
radius = float(input("Please enter the radius of a sphere: "))
Sphere_area = 4*math.pi*radius*radius
SphereVolume = (4/3)*math.pi*radius*radius*radius
print("Area of sphere is = %.2f" % Sphere_area)
print("Volume of sphere is = %.2f" % SphereVolume)
