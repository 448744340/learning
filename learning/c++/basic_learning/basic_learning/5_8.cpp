#include <iostream>
#include <string>
#include <cstring>
const int ArrSize=30;

int main()
{
    using namespace std;
    int i,sum=0;
    cout << "Enter words (to stop, type the word done):" <<endl;
    char ch[ArrSize];
    cin >> ch;
    while(strcmp(ch,"done")!=0)
    {
        if(bool(cin >> ch) == true)
            sum +=1;
    }
    cout << "You entered a total of " <<sum <<" words";
}
