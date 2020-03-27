#include<iostream>
#include<string>
#include<vector>

using namespace std;


int f(string str1, string str2)
{
    if(str1.size()==0||str2.size()==0)
        return 0;
    int row = str1.size();
    int col = str2.size();

    vector<vector<int>> dp(row+1,vector<int>(col+1,0));
    int i,j;

    for(i=1;i<=str1.size();i++)
    {
        for(j=1;j<=str2.size();j++)
        {
            if(str1[i-1]==str2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=min(min(dp[i-1][j]+1,dp[i][j-1]+1),dp[i-1][j-1]+1);
        }
    }
    return dp[row][col];
}

int main()
{
    string str1;
    string str2;

    cin>>str1;
    cin>>str2;

    cout<<f(str1,str2);
}
