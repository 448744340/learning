#include<iostream>

using namespace std;

int main()
{
    int i;
    cin>>i;
    int num_1 =0;
    int num_0 =0;
    int flag=1;

    if(i<0)
    {
        while(flag)
        {
            if(i&flag)
                num_1++;
            else
                num_0++;
            flag = flag<<1;
        }
    }
    else
    {
        while(i)
        {
            if(i&1)
                num_1++;
            else
                num_0++;
            i>>=1;
        }
    }

    cout<<"num_1:"<<num_1<<" num_0:"<<num_0;


}
