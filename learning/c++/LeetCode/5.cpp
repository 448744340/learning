#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution
{
public:
    string longestPalindrome(string s){
        int length=s.size();
        if(length==0) return "";
        vector<vector<int>> dp(length,vector<int>(length,0)); //dp[i][j]表示字符串s从i到j位置是否为回文串
        for(int i=0;i<length;i++)
            dp[i][i]=1;

        int maxlength=1;
        int start=0;

        for(int i=1;i<length;i++)
        {
            for(int j=0;j<i;j++)  //从j到i范围内的字符串
            {
                if(s[j]==s[i])
                {
                    if(i-j<=2)
                        dp[j][i]=1;
                    else
                        dp[j][i]=dp[j+1][i-1];
                }

                if(dp[j][i])
                {
                    if(i-j+1>maxlength)
                    {
                        maxlength=i-j+1;
                        start=j;
                    }
                }
            }
        }
        return s.substr(start,maxlength);
    }
};

int main()
{
    string str;
    cin >> str;
    Solution s;
    cout << s.longestPalindrome(str);

}
