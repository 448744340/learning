#include <iostream>
#include <array>

const int ArSize = 100;

int main()
{
    using namespace std;
    array<long double , ArSize> factorials;
    factorials[1] = factorials[0] = 1LL;
    for (int i=2; i<=ArSize; i++)
        factorials[i] = factorials[i-1] * i;
    cout <<"100!= " << factorials[100];
}
