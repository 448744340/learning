#include <iostream>
using namespace std;

void f(int n, int m, int x, int y);

int main()
{
    int n, m, x, y;
    cin >> n;
    cin >> m;
    cin >> x;
    cin >> y;
    f(n, m, x, y);
}

void f(int n, int m, int x, int y)
{
    int center_x;
    int center_y;
    center_x = (n + x)/2;
    center_y = (m + y)/2;

    cout << center_x <<" " <<center_y<< endl;
}
