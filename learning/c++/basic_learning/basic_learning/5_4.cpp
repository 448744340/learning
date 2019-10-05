#include <iostream>
const double Daphne_rate = 0.1;
const double Cleo_rate = 0.05;

int main()
{
    using namespace std;
    double Daphne_principal = 100;
    double Cleo_principal = 100;
    int i=1;
    double Daphne_interest, Cleo_interest, Daphne_sum, Cleo_sum;
    Daphne_interest = Daphne_principal * Daphne_rate;
    Cleo_interest= Cleo_principal * Cleo_rate;
    Daphne_sum = Daphne_interest;
    Cleo_sum = Cleo_interest;
    while (Daphne_sum > Cleo_sum)
    {
        i++;
        Cleo_principal = Cleo_principal + Cleo_interest;
        Daphne_interest = Daphne_principal * Daphne_rate;
        Cleo_interest= Cleo_principal * Cleo_rate;
        Daphne_sum += Daphne_interest;
        Cleo_sum += Cleo_interest;
    }

    cout << "After " << i <<" years ,the sum of Daphne is " << Daphne_sum << " ,the sum of Cleo is " <<Cleo_sum<<endl;
}
