#include <iostream>
const int Months = 12;
const int Years = 3;

int main()
{
    using namespace std;
    char * months[Months] =
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int sale_num[Years][Months], i, j;
    int sale_nums_years=0;
    for (j=0;j<Years;j++)
    {
        int sale_nums=0;
        cout << "Enter the year " << j+1 << "sale" << endl;
        for (i=0;i<Months;i++)
        {
            cout << "Enter the sales number of " << months[i] << " :";
            cin >> sale_num[j][i];
            cout << endl;
            sale_nums +=sale_num[j][i];
        }
        cout << "The sale of year " << j << "is " <<sale_nums <<endl;
        sale_nums_years +=sale_nums;
    }

    cout << "The sale of 3 years is: " << sale_nums_years <<endl;
}
