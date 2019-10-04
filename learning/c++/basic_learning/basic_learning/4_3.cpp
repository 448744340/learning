#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char first_name[20];
    char last_name[20];

    cout << "Enter your first name: ";
    cin.getline(first_name,20);
    cout << endl << "Enter your last name: ";
    cin.getline(last_name,20);

    char name[40];
    strcpy(name,first_name);
    strcat(name,", ");
    strcat(name,last_name);
    cout <<endl <<"Here's the information in a single string: " <<name <<endl;
}
