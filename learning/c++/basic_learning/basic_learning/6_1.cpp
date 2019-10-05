#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    char ch;

    while (cin.get(ch) && ch != '@')
    {
        if (isalpha(ch))
        {
            if (isupper(ch))
            {
                ch = tolower(ch);
            }
            if (islower(ch))
            {
                ch = toupper(ch);
            }
        }
        cout << ch;
    }
}
