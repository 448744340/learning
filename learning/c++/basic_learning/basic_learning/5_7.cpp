#include <iostream>
#include <string>

int main()
{
    using namespace std;
    struct car
    {
        string car_maker;
        int make_year;
    };

    int car_num;
    cout << "How many cars do you wish to catalog?";
    cin >>car_num;
    cin.get();
    cout << endl;

    car * arr = new car [2];
    for (int i=0;i<car_num;i++)
    {
        cout << "Car #" << i+1 <<":" <<endl;
        cout << "Please enter the make: ";
        getline(cin,arr[i].car_maker);
        cout << "Please enter the year made: ";
        cin >> arr[i].make_year;
        cin.get();
    }
    cout << "Here is your collection:" << endl;
    for (int j=0;j<car_num;j++)
    {
        cout << arr[j].make_year <<" " <<arr[j].car_maker <<endl;
    }
}
