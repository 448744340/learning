#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Solution{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int length1=text1.length();
        int length2=text2.length();

        vector<int> temp(length2+1,0);//第一个位置用于存空字符
        vector<vector<int>> dp(length1+1,temp);

        for(int i=1;i<length1+1;i++)
        {
            for(int j=1;j<length2+1;j++)
            {
                if(text1[i-1]==text2[j-1])
                    dp[i][j] = dp[i-1][j-1]+1;
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<dp[length1][length2];

    }
};


int main()
{
    string text1;
    string text2;
    cout<<"text1 = ";
    cin>>text1;
    cout<<", text2 = ";
    cin>>text2;

    Solution s;
    s.longestCommonSubsequence(text1,text2);
}
