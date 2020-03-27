#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

class Solution{
public:
    int climbStairs(int n){
        vector<int> dp(n+1);
        if(dp.size()<3)
            dp.resize(3); //若不足三下面循环会报错

        dp[0]=0;
        dp[1]=1;
        dp[2]=2;

        for(int i=3;i<n+1;i++)
            dp[i]=dp[i-1]+dp[i-2];

        return dp[n];
    }
};

int main()
{
    int n;
    scanf("%d",&n);
    Solution s;
    printf("%d",s.climbStairs(n));
}
