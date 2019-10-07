#include <iostream>
#include <string>

int main()
{
    using namespace std;

    struct legal_interest
    {
        string name;
        double fund;
    };

    int num;
    cout << "Enter the number of subscriber: ";
    cin >> num;
    cin.get();

    legal_interest *test = new legal_interest[num];
    for (int i=0;i<num;i++)
    {
        cout << "Enter the name of the " << i+1 << " subscriber:";
        getline(cin,test[i].name);
        cout << "Enter the fund of the " << i+1 << " subscriber:";
        cin >> test[i].fund;
        cin.get();
    }

    int num_grand=0, num_notgrand=0;
    string grand[num], notgrand[num];
    for (int j=0;j<num;j++)
    {
        if (test[j].fund > 10000)
        {
            grand[num_grand] = test[j].name;
            num_grand += 1;
        }
        else
        {
            notgrand[num_notgrand] = test[j].name;
            num_notgrand += 1;
        }
    }
    cout << "Grand Patrons: " << endl;
    if (num_grand == 0)
        cout << "none" << endl;
    else
        for (int k=0;k<num_grand;k++)
        {
            cout << grand[k] << endl;
        }

    cout << "Patrons: " << endl;
    if (num_notgrand == 0)
        cout << "none" <<endl;
    else
        for (int k=0;k<num_notgrand;k++)
        {
            cout << notgrand[k] << endl;
        }
}
