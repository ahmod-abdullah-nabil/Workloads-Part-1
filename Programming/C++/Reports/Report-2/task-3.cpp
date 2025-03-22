/*
Write a C++ program to print the following character pattern using loop statements:
              *
             ***
            *****
           *******
          *********

*/

#include <iostream>

int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = i; j < rows; ++j)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
