//with switch statement

#include <iostream>

int main() {
	int score;
	char grade;

	std::cout << "Enter the score (0-100): ";
	std::cin >> score;

	if (score < 0 || score > 100) {
		std::cout << "Invalid score" << std::endl;
		return 1;
	}

	switch (score / 10) {
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
		break;
	}

	std::cout << "The grade is: " << grade << std::endl;

	return 0;

}