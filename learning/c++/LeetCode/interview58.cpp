#include<iostream>
#include<string>

using namespace std;

class Solution{
public:
    string reverseLeftWords(string s, int n){
        if(n==0||s.size()<=1) return s;
        int length=s.size();
        return s.substr(n,length-n)+s.substr(0,n);
    }
};

int main()
{
    string str;
    cout<<"s=";
    cin>>str;
    int k;
    cin>>k;
    Solution s;
    cout<<s.reverseLeftWords(str,k);
}
