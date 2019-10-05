#include <iostream>

int get_sum(int max,int min)
{
    int i;
    int sum = 0;
    for(i=min;i<=max;i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    using namespace std;
    int i,j,max,min;
    cout << "Enter the first integer:";
    cin >> i;
    cout << endl <<"Enter the second integer:";
    cin >> j;

    if (i>j)
    {
        max = i;
        min = j;
    }
    else if (i<j)
    {
        max = j;
        min = i;
    }
    else
        cout << endl << "The two integers is the same";
    cout << endl << "The sum of the integers between those two input is: "<<get_sum(max,min);
}
