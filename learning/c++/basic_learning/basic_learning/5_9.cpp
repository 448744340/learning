#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "Enter words (to stop, type the word done):" <<endl;
    string str;
    int sum=0;
    while (cin >> str && str!="done")
    {
        ++sum;
    }
    cout << "You entered a total of " <<sum <<" words";
}
