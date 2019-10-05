#include <iostream>
#include <string>
#include <cstdlib>

const int ArraySize =10;
using namespace std;

int main()
{
    double donation[ArraySize];
    double sum=0, average=0;
    int i,num=0;
    int mark = 0;
    for (i=0;i<ArraySize;i++)
    {
        string str;
        mark = 0;
        cout << "Enter the 10 donations: ";
        getline(cin,str);

        for (int j=0;j<str.size();j++)
        {
            if (isdigit(str[j]) == false && ispunct(str[j]) == false)
            {
                mark = 1;
                cout << "This is not digit " <<endl;
                break;
            }
        }

        if (mark == 1)
            break;
        else
            donation[i] = atof(str.c_str());
            sum += donation[i];
    }

    average = sum / i;
    cout << "The average of these donations is: " << average <<endl;
    for (int k=0;k<i;k++)
    {
        if (donation[k] > average)
            num++;
    }
    cout << "There are " << num << " donations greater than average";
}
