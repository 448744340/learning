#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;

int main()
{
    using namespace std;
    ifstream inFile;

    inFile.open("6_8.txt");
    if (!inFile.is_open())
    {
        cout << "The file can not be opened" <<endl;
        return 0;
    }

    char ch;
    int count=0;

    inFile >> ch;
    while (inFile.good())
    {
        ++count;
        inFile >> ch;
    }
    cout << "The file has " << count << " character" << endl;

    if (inFile.eof())
    {
        cout << "Reach the EOF of the file" << endl;
        return 0;
    }
}
