#include <iostream>
const int Months = 12;

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

    int sale_num[Months], i, sale_nums=0;
    for (i=0;i<Months;i++)
    {
        cout << "Enter the sales number of " << months[i] << " :";
        cin >> sale_num[i];
        cout << endl;
        sale_nums +=sale_num[i];
    }
    cout << "The sale of this year is: " << sale_nums <<endl;
}
