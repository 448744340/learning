#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

int split(int n, int k,int &value)
{
    int part_1,part_2;
    if(n<1)
        return 0;
    else
    {
        if(n<=k)
        {
            value +=1;
        }
        else
        {
            part_1 = (n-k)/2;
            part_2 = part_1 + k;
            split(part_1,k,value);
            split(part_2,k,value);
        }
    }
}

int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    int value=0;
    split(n,k,value);
    cout << value<<endl;
}
