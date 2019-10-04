#include <iostream>
#include <string>

int main()
{
    using namespace std;
    struct CandyBar
    {
        string brand;
        double weight;
        int carol;
    }snack {"Mocha Munch",2.3,350};

    cout << "brand: " <<snack.brand <<"  weight: " <<snack.weight <<"  carol: " <<snack.carol <<endl;
}
