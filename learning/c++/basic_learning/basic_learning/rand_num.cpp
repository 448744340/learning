#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

void knuth(int n,int m);

int main()
{
    int n, m;
    cout << "Enter n and m: ";
    cin >> n;
    cin >> m;
    cin.get();
    cout << endl;
    knuth(n, m);
}

void knuth(int n, int m)
{
    srand((unsigned int)time(0));
    for(int i=0;i<n;i++)
    {
        if(rand()%(n-i) < m)
        {
             cout << i <<endl;
             m--;
        }
    }
}
