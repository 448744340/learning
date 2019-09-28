#include <iostream>

int main()
{
	using namespace std;
	const int day_hours = 24;
	const int hour_minutes = 60;
	const int minute_seconds = 60;

	long seconds;
	cout << "Enter the number of seconds :";
	cin >> seconds;
	cout << endl;

	int days = seconds / (day_hours * hour_minutes * minute_seconds);
	int hours = (seconds - days * (day_hours * hour_minutes * minute_seconds)) / minute_seconds /hour_minutes;
	int minutes = (seconds - days * (day_hours * hour_minutes * minute_seconds) - hours * (hour_minutes * minute_seconds)) / minute_seconds;
    int seconds_after = seconds % minute_seconds ;

	cout << seconds << "seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds_after << "seconds";
}