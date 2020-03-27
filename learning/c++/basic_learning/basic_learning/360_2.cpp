#include<iostream>
using namespace std;

double f(int n, int m)
{
    if(n==0)
        return 0;
    else if(n!=0 && m==0)
        return 1;

    int count_n=n;
    double result=0;
    while(count_n>=0)
    {
        result=(f((count_n--)-1,m)+f(n,m-1))/2;
    }
}



int main()
{
    int n,m;
    cin>>n>>m;
    cout<<f(n,m);
}
