#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    int num_people;
    int num_type;
    cin >> num_people;
    cin >> num_type;

    int favourite[num_people]={0};
    for (int i=0;i<num_people;i++)
    {
        cin >> favourite[i];
    }

    map<int,int> f_map;
    for (int i=0;i<num_people;i++)
    {
        if(f_map.count(favourite[i])==0)
        {
            f_map[favourite[i]]=1;
        }
        else
        {
            f_map[favourite[i]]++;
        }
    }

    int count=0;
    map<int,int> ::iterator it;
    for (it=f_map.begin();it!=f_map.end();it++)
    {
        if(it->second %2 ==0)
            count += it->second/2;
        else
            count += (it->second/2)+1;
    }

    cout << count;
}


