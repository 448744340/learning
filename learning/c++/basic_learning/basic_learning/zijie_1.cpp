#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
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
class Solution{
public:
    void f(map<string,string>type_input){
        map<string,string> out;
        map<string,string>::iterator it;
        vector<string> out_value;
        int j=0;
        for(it=type_input.begin();it!=type_input.end();it++)
        {
            if(out.count(it->second)==0)
            {
                out[it->second]=it->first;
            }
            else
            {
                out[it->second] +=","+it->first;
            }
        }

        for(it=out.begin();it!=out.end();it++)
        {
            vector<string> v;
            SplitString(it->second,v,",");
            sort(v.begin(),v.end());
            it->second="";
            for(int j=0;j<v.size();j++)
            {
                if(j==0)
                {
                    it->second +=v[j];
                }
                else
                {
                    it->second +=" "+v[j];
                }
            }
            cout<<it->first<<" "<<it->second<<endl;
        }

    }
};


int main()
{
    Solution s;
    int type_nums;
    cin>>type_nums;
    if(type_nums>0)
    {
        map<string,string>type_input;
        string key,value;
        for(int i=0;i<type_nums;i++)
        {
            cin>>key;
            cin>>value;
            type_input[key]=value;
        }
        s.f(type_input);
    }
}
