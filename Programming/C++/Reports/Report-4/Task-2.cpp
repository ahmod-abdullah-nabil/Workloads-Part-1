/*. Define a two-dimensional array to store the first ten rows of Yanghui triangle and print it.
               1
              1 1
             1 2 1
            1 3 3 1
           1 4 6 4 1
         1 5 10 10 5 1
        ……
*/

#include <iostream>
#include <iomanip>

int main()
{
    const int rows = 10;
    int triangle[rows][rows] = {0};

    for (int i = 0; i < rows; ++i)
    {
        triangle[i][0] = 1;
        for (int j = 1; j <= i; ++j)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        std::cout << std::setw((rows - i) * 2);
        for (int j = 0; j <= i; ++j)
        {
            std::cout << triangle[i][j] << "   ";
        }
        std::cout << std::endl;
    }

    return 0;
}
