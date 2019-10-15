#include<iostream>
using namespace std;

int main()
{
    double total_1, choices_1, total_2, choices_2;
    cout << "Enter the total number of choices_1 on the game card and \n"
            "Enter the total number of choices_2 on the game card and \n"
            "the number_1 of picks allowed:\n"
            "the number_2 of picks allowed:\n";

    if ((cin >> total_1 >> total_2 >> choices_1 >> choices_2) && choices_1 <= total_1 && choices_2 <= total_2)
    {
        cout << "You have one chance in ";
        cout << probability(total_1, total_2, choices_1, choices_2);
        cout << " of winning.\n";
    }
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers_1, unsigned numbers_2, unsigned picks_1, unsigned picks_2)
{
    long double result = 1.0;
}
