#include <iostream>
#include <cctype>
const int strsize=30;
const int arrsize=3;

int main()
{
    using namespace std;
    struct bob
    {
        char fullname[strsize];
        char title[strsize];
        char bopname[strsize];
        int preference;
    }test[arrsize] =
    {
        {"Wimp Macho","Junior","Werewolf",0},
        {"Raki Rhodes","Senior","Witch",1},
        {"Celia Laiter","Principle","Prophet",2}
    };

    cout << "Benevolent Order of Programmers Report";
    cout << endl << "a.display by name\t\tb.display by title";
    cout << endl << "c.display bu bopname\t\td.display by preference";
    cout << endl << "q.quit";

    char ch;
    cout << "Enter your choice:";
    while (cin >> ch)
    {
        cin.get();
        switch (ch)
        {
        case 'a':
            {
                for (int i=0;i<arrsize;i++)
                {
                    cout << test[i].fullname <<endl;
                }
                cout << "Enter your choice:";
                break;
            }
        case 'b':
            {
                for (int i=0;i<arrsize;i++)
                {
                    cout << test[i].title <<endl;
                }
                cout << "Enter your choice:";
                break;
            }
        case 'c':
            {
                for (int i=0;i<arrsize;i++)
                {
                    cout << test[i].bopname <<endl;
                }
                cout << "Enter your choice:";
                break;
            }
        case 'd':
            {
                for (int i=0;i<arrsize;i++)
                {
                    if (test[i].preference == 0)
                        cout << test[i].fullname << endl;
                    else if (test[i].preference ==1)
                        cout << test[i].title << endl;
                    else
                        cout << test[i].bopname << endl;
                }
                cout << "Enter your choice:";
                break;
            }
        case 'q':
            {
                cout << "Bye!" <<endl;
                return 0;
            }
        }
    }
}
