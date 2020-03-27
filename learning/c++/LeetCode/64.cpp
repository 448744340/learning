#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    int minPathSum(vector<vector<int>>& grid){

        if(grid.empty()) return 0;

        int m,n;
        m=grid.size();
        n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));//dp表示从（0，0）到（i,j）的最小路径

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0&&j==0)
                    dp[i][j]=grid[i][j];
                else if(i==0)
                    dp[i][j]=dp[i][j-1]+grid[i][j];
                else if(j==0)
                    dp[i][j]=dp[i-1][j]+grid[i][j];
                else
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }
        }
        return dp[m-1][n-1];
    }
};

int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mp(m,vector<int>(n,0));

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mp[i][j];
        }
    }

    Solution s;
    cout<<s.minPathSum(mp);
}
