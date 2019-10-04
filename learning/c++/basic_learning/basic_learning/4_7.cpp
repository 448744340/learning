#include <iostream>
#include <string>

int main()
{
    using namespace std;
    struct pizza
    {
        string company_name;
        double zhijing;
        double weight;
    };

    pizza one;

    cout << "Enter the name of the company: ";
    getline(cin,one.company_name);
    cout << "Enter the zhijing of the pizza: ";
    cin >>one.zhijing;
    cout << endl << "Enter the weight of the pizza: ";
    cin >> one.weight;
    cout << endl << "Name of the company :" <<one.company_name <<" zhijing: " <<one.zhijing << " weight: "<<one.weight <<endl;
}
