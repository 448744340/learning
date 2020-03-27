#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    int maxValue(vector<vector<int>>& grid){
        if (grid.size()==0) return 0;
        int row,col;
        row=grid.size();
        col=grid[0].size();
        vector<vector<int>> dp(row,vector<int>(col,0));

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i==0&&j==0)
                    dp[i][j]=grid[i][j];
                else if(i==0)
                    dp[i][j]=dp[i][j-1]+grid[i][j];
                else if(j==0)
                    dp[i][j]=dp[i-1][j]+grid[i][j];
                else
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j])+grid[i][j];
            }
        }
        return dp[row-1][col-1];
    }
};

int main()
{
    Solution s;
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mp(m,vector<int>(n,0));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cin>>mp[i][j];
    }
    s.maxValue(mp);
}