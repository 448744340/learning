#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
struct T{
    int a;
    int b;  //a������룬b�����˲�����
    bool operator<(const T &c) const
    {
        return a>c.a;
    }
}stop[100];

main(){

   map<string,string> a={{"abc","a"},{"abc","a"}};

   map<string,string>::iterator it;
   for(it=a.begin();it!=a.end();it++)
   {
       cout<<it->second<<" ";
   }
}
