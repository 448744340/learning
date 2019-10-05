#include <iostream>

int main()
{
    using namespace std;
    int ch,sum=0;
    cout << "Enter a number(0 is the symbol of ending) :";
    cin >> ch;
    while (ch)
    {
        sum += ch;
        cout <<"\t The sum is " <<sum <<endl;
        cout << "Enter a number(0 is the symbol of ending) :";
        cin >> ch;
    }
}
