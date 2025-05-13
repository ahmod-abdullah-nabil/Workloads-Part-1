#include <iostream>
#include<cstdlib>

using namespace std;

int main() {
	
	for (int i = 0; i < 12;  i++)
	{
		cout << rand() << endl;
	}

	
	cin.ignore();
	cin.get();
	return 0;
}