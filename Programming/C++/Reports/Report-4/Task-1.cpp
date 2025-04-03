/*Define two arrays for storing characters, copy the characters in the second array to the end of the first array.*/

#include <iostream>
#include <cstring>

int main()
{
    char array1[100];
    char array2[100];

    std::cout << "Enter the first string (max 99 characters): ";
    std::cin.getline(array1, 100);

    std::cout << "Enter the second string (max 99 characters): ";
    std::cin.getline(array2, 100);

    size_t remaining_space = sizeof(array1) - strlen(array1) - 1;

    strncat(array1, array2, remaining_space);

    std::cout << "Resulting Array: " << array1 << std::endl;

    return 0;
}
