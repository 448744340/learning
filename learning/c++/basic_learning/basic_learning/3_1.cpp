#include <iostream>

int main()
{
	const int Transfer = 12;
	using namespace std;
	cout << "Enter your height(in) :_____\b\b\b\b\b";
	int height;
	cin >> height;
	cout << endl;
	cout << height / Transfer << "in  and " << height % Transfer << "fit";
}