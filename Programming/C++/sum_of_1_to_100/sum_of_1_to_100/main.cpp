//with the while loop
#include <iostream>

int main() {
	int sum = 0;
	int i =0;
	while (i <= 100) {
		sum += i;
		++i;
	}
	std::cout << "1+2+3+...._100: " << sum << std::endl;
	return 0;
}


//with for loop

/*

#include <iostream>

int main() {
	int sum = 0;
	for (int i = 1; i <= 100; ++i) {
		sum += i;
	}
	std::cout << "1+2+3+...._100: " << sum << std::endl;
	return 0;
}

*/
