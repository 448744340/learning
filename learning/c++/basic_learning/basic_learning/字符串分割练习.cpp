#include<iostream>
#include<vector>
#include<string>

using namespace std;

void SplitString(const string &s,vector<string> & v,const string c)
{
    string::size_type pos1,pos2;
    pos2 = s.find(c);
    pos1 = 0;

    while(string::npos!=pos2)
    {
        v.push_back(s.substr(pos1,pos2-pos1));

        pos1=pos2+c.size();
        pos2=s.find(c,pos1);
    }

    if(pos1 != s.length())
    {
        v.push_back(s.substr(pos1));
    }
}

int main()
{
    string str_input;
    vector<string> v;
    string c;
    cout << "Enter a string:";
    getline(cin,str_input);
    cout << "Enter the separation character:";
    getline(cin,c);
    SplitString(str_input,v,c);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<",";
    }
}
