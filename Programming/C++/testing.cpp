// Reads three numbers from the file infile.txt, sums the numbers,
// and writes the sum to the file outfile.txt.

#include <fstream>
#include <iostream>
using std::cerr;
using std::endl;
using std::ifstream;
using std::ofstream;

int main()
{
    ifstream inStream;
    ofstream outStream;

    // Open the input file
    inStream.open("infile.txt");
    if (!inStream)
    {
        cerr << "Error: Could not open infile.txt for reading." << endl;
        return 1;
    }

    // Open the output file
    outStream.open("outfile.txt");
    if (!outStream)
    {
        cerr << "Error: Could not open outfile.txt for writing." << endl;
        return 1;
    }

    int first, second, third;

    // Read three numbers from the input file
    if (!(inStream >> first >> second >> third))
    {
        cerr << "Error: Could not read three integers from infile.txt." << endl;
        return 1;
    }

    // Write the sum to the output file
    outStream << "The sum of the first 3\n"
              << "numbers in infile.txt\n"
              << "is " << (first + second + third)
              << endl;

    // Close the files
    inStream.close();
    outStream.close();

    return 0;
}