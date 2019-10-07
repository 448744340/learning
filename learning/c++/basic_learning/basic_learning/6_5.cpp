#include <iostream>

int main()
{
    using namespace std;
    double tvarps;
    char rank;
    cout << "Please input your income(tvarps): ";
    while (cin >> tvarps && tvarps > 0 )
    {
        double revenue=0;
        cin.get();

        if (tvarps > 35000)
            rank = 'a';
        else if (15001 <= tvarps && tvarps <=35000)
            rank = 'b';
        else if (5001 <= tvarps && tvarps <=15000)
            rank = 'c';
        else
            rank = 'd';

        switch (rank)
        {
            case 'a' : revenue += (tvarps-35000)*0.2 + 20000*0.15 +10000*0.1;break;
            case 'b' : revenue += (tvarps-15001)*0.15 + 10000*0.1;break;
            case 'c' : revenue += (tvarps-5001)*0.1;break;
            default : revenue = 0;break;
        }
        cout << "Your revenue is(tvarps) :" <<revenue <<endl;
        cout << "Please input your income(tvarps): ";
    }
}
