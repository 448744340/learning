#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    int cuttingRope(int n){
        vector<int> dp(n+1);//dp存放最大子段乘积，此时是允许分割段数为0来达到最大值的
        if(n==2||n==3) return n-1; //现实情况是必须分割至少1次 因此小于等三的情况可以直接返回
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        for(int i=4;i<n+1;i++)
        {
            for(int j=1;j<=i/2;j++)
            {
                dp[i]=max(dp[i],dp[i-j]*dp[j]); //考虑的情况是分割或者不分割 只有两种情况；
            }
        }
        return dp[n];
    }
};
int main()
{
    ;
}
