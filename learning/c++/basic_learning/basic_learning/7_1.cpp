#include <iostream>
using namespace std;
double average(double x, double y);

int main()
{
    double x ,y;
    cout << "Enter 2 numbers (0 is for end):";
    cin >> x >> y;
    while(x && y)
    {
        cout << endl << "The harmonic average of x and y is: " << average(x,y) << endl;
        cout << "Enter 2 numbers (0 is for end):";
        cin >> x >> y;
    }
}

double average(double x, double y)
{
    double avg;
    avg = 2.0 * x * y /(x+y);
    return avg;
}
