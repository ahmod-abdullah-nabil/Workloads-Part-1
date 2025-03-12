
/*
2. Write a C++ program to calculate the sum of the first 1000 terms using loop statements:

s = 2/1 - 3/2 + 5/3 - 8/5 + ...
*/
#include <iostream>
using namespace std;

int main() {
	double sum = 0.0;
	long long fib1 = 2, fib2 = 3, fib3;  // Fibonacci numbers for numerators (starting from 2)
	long long denom1 = 1, denom2 = 2, denom3;  // Fibonacci numbers for denominators (starting from 1)

	for (int i = 1; i <= 1000; i++) {
		if (i % 2 != 0) {  // Odd terms are positive
			sum += (double)fib1 / denom1;
		}
		else {  // Even terms are negative
			sum -= (double)fib2 / denom2;
		}

		// Update Fibonacci numbers
		fib3 = fib1 + fib2;
		denom3 = denom1 + denom2;

		// Move to the next terms
		fib1 = fib2;
		fib2 = fib3;
		denom1 = denom2;
		denom2 = denom3;
	}

	cout << "The sum of the first 1000 terms is: " << sum << endl;

	return 0;
}
