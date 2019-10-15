#include <iostream>
#include <fstream>

int main()
{
    using namespace std;

    fstream inFile;
    inFile.open("6_9.txt");
    if (!inFile.is_open())
    {
        cout << "Could not open the file" << endl;
        return 0;
    }
    char ch[100];
    inFile.getline(ch,100);

    while (inFile.good())
    {
        cout << ch;
        cout << endl;
        inFile.getline(ch,100);
    }

    if (inFile.eof())
    {
        cout << "Reach the EOF of the file" << endl ;
        return 0;
    }
}
