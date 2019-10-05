#include <iostream>

int main()
{
    using namespace std;
    cout << "Please enter one of the following choices: ";
    cout << endl << "c) carnivore\t\tp) pianist";
    cout << endl << "t) tree\t\t\tg) game" <<endl;

    char ch;
    cin >> ch;
    cin.get();

    while (ch!='c' && ch!= 'p' && ch!='t' && ch!='g')
    {
        cout << "Please enter a c, p, t, or g:";
        cin >> ch;
        cin.get();
    }

    switch (ch)
    {
        case 'c' : cout << "carnivore "; break;
        case 'p' : cout << "pianist "; break;
        case 't' : cout << "tree "; break;
        case 'g' : cout << "game "; break;
    }
}
