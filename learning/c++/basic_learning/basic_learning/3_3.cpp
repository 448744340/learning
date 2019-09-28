#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter a latitude in degrees , minutes , and seconds :" << endl;
	cout << "First , enter the degrees :";
	int degree;
	cin >> degree;
	cout << endl << "Next , enter the minutes of arc :";
	int minute;
	cin >> minute;
	cout << endl << "Finally , enter the seconds of arcs :";
	int second;
	cin >> second;
	double degrees = double(degree) + double(minute) / 60 + double(second) / 3600;
	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << degrees << "degrees" << endl;
}