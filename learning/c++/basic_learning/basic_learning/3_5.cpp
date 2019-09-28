#include <iostream>

int main()
{
	using namespace std;
	long long world_population;
	long long US_population;

	cout << "Enter the world's population :";
	cin >> world_population;
	cout << endl << "Enter the population of the US :";
	cin >> US_population;

	double percent = double(US_population) / double(world_population) * 100;

	cout << "The population of the US is " << percent << "% of the world population." << endl;
}