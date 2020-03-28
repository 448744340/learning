#include<iostream>

using namespace std;

class Solution{
public:
    int sumNums(int n){
         int sum=n;
         n&&(sum+=sumNums(n-1));
         return sum;
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    cout<<s.sumNums(n);
}
