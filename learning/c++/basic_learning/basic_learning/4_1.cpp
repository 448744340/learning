#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "What is your first name?";
    string first_name;
    getline(cin,first_name);
    cout << endl << "What is your last name?";
    string last_name;
    getline(cin,last_name);
    cout << endl << "What letter grade do you deserve?";
    char grade;
    cin >> grade;
    cout<< endl << "What is your age?";
    int age;
    cin >> age;
    cout << endl << "Name: " <<last_name << ", " <<first_name << endl;
    cout << "Grade: " <<char (grade+1) <<endl;
    cout << "Age: " <<age <<endl;
}
