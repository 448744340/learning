#include<string>
#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    string replaceSpace(string s){
        if(s.size()==0) return "";
        string::size_type pos;
        vector<string::size_type> vec;
        pos=s.find(" ");
        if(pos==string::npos) return s;
        while(pos!=string::npos)
        {
            vec.push_back(pos);
            pos=s.find(" ",pos+1);
        }


        string result="";
        string::size_type pos2;
        pos=0;
        for(string::size_type i=0;i<vec.size();i++)
        {
            pos2=vec[i];
            result +=s.substr(pos,pos2-pos);
            result +="%20";
            pos=pos2+1;
        }
        result +=s.substr(pos);

        return result;

    }
};

int main()
{
    Solution s;
    cout<<s.replaceSpace("We are happy.");
}
