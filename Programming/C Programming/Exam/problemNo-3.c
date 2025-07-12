//Problem Name: Program to determine the area of a triangle.
#include<stdio.h>
int main()
{
	int base,height,area;
  //as we know [triangle area=(base*height)/2].
	printf("Enter base and height of trianlge:");
	scanf("%d %d",&base,&height);
	area=(base*height)/2;   
	printf("\n Area of Triangle:%d",area);
	return 0;
}			