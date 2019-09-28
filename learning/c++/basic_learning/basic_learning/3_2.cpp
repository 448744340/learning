#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	const int Transfer_in_ft = 12;
	const double Transfer_in_meter = 0.0254;
	const double Transfer_pound_kg = 2.2;

	int height_ft;
	int height_in;
	cout << "Please enter your height(ft) :__\b\b";
	cin >> height_ft;
	cout << "(in)_____\b\b";
	cin >> height_in;
	cout << endl;

	int height = height_ft * Transfer_in_ft + height_in;
	double height_meter = height * Transfer_in_meter;

	int weight_pound;
	cout << "Please enter your weight(pound) :__\b\b";
	cin >> weight_pound;
	cout << endl;

	double weight = weight_pound / Transfer_pound_kg;

	double BMI = weight / (height_meter * height_meter);

	cout << "BMI is :" << BMI << endl;
}