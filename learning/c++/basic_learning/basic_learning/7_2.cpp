#include <iostream>
using namespace std;
const int MAXLENGTH = 10;

int arr_input(double arr[], int length);
void arr_display(double arr[], int length);
double arr_avg(double arr[], int lenght);

int main()
{
    double golf[10];
    int length;

    length = arr_input(golf,MAXLENGTH);
    if (length == 0)
    {
        cout << "Score is empty"<< endl;
        return 0;
    }
    arr_display(golf,length);
    arr_avg(golf,length);
}

int arr_input(double arr[], int length)
{
    int i=0;
    cout << "Enter up to ten golf scores: ";
    while (cin >> arr[i])
    {
        i++;
        if (cin.get() == '\n')
            break;
    }
    return i;
}

void arr_display(double arr[], int length)
{
    cout << "All score is following:";
    for (int i=0;i<length;i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
}

double arr_avg(double arr[], int length)
{
    double sum=0;
    for (int i=0;i<length;i++)
        {
            sum += arr[i];
        }
    double avg;
    avg = sum/length;
    cout << "The average of scores is: " << avg << endl;
}
