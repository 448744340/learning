#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    int waysToChange(int n){
        if(n==0) return 0;
        const int mod=1000000007;
        vector<vector<int>> dp(4,vector<int>(n+1,0)); //dp[i][j] 表示用i+1种硬币去j分的表示方法，且考虑了n=0的情况
        vector<int> coin={1,5,10,25};
        for(int i=0;i<n+1;i++)
            dp[0][i]=1; //只用一种硬币必然只有一种表示
        for(int i=0;i<4;i++)
            dp[i][0]=1;


        for(int i=1;i<4;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(coin[i]<=j)
                    dp[i][j]=(dp[i-1][j]+dp[i][j-coin[i]])%mod;
                else
                    dp[i][j]=dp[i-1][j];
            }
        }

        return dp[3][n];
    }
};

int main()
{
    int n;
    cin>>n;
    Solution s;
    cout<<s.waysToChange(n);
}
