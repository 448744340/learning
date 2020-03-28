#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:
    vector<int> printNumbers(int n){
        double maxnumber=pow(10.0,n);
        cout<<maxnumber<<endl;
        vector<int> result;
        for(int i=1;i<maxnumber;i++)
            result.push_back(i);

        return result;
    }
};

int main()
{
    int n;
    cin>>n;
    Solution s;
    vector<int> result;
    result=s.printNumbers(n);
    cout<<result.size()<<endl;
    for(size_t i=0;i<result.size();i++)
        cout<<result[i]<<",";
}
