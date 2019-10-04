#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter your first name: ";
    string first_name;
    getline(cin,first_name);
    cout << endl << "Enter your last name: ";
    string last_name;
    getline(cin,last_name);
    string name = first_name + ", " +last_name;
    cout << endl << "Here's the information in a single string: "<< name <<endl;
}
