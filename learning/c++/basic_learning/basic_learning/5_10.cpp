#include <iostream>

int main()
{
    using namespace std;
    int row_num;
    cout << "Enter number of rows: ";
    cin >> row_num;
    cin.get();
    cout << endl;
    for (int i=0;i<row_num;i++)
    {
        for (int j=0;j<row_num;j++)
        {
            if ((i+j+1)<row_num)
                cout << ".";
            else
                cout << "*";
        }
        cout << endl;
    }
}
