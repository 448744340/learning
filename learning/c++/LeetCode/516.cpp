#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution{
public:
    int longestPalindromeSubseq(string s){
        int length=s.size();
        if(length==0) return 0;
        if(length==1) return 1;
        vector<vector<int>> dp(length,vector<int>(length,0)); //dp[i][j] 表示从i+1到j+1范围内的最长回文子序列长度
        for(int i=0;i<length;i++)
        {
            dp[i][i]=1;    //这里的这个初始化很重要 第一次做的时候忘了
        }
        for(int j=1;j<length;j++)
        {
            for(int i=j-1;i>=0;i--)
            {
                if(s[i]==s[j])
                {
                    if(j-i<3)
                        dp[i][j]=j-i+1;
                    else
                        dp[i][j]=dp[i+1][j-1]+2; //左下
                }
                else
                    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);//左和下的最大值
            }
        }
        return dp[0][length-1];
    }
};

int main()
{
    Solution s;
    string str;
    cin>>str;
    cout<<s.longestPalindromeSubseq(str);
}
