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
        vector<vector<int>> dp(length,vector<int>(length,0)); //dp[i][j] ��ʾ��i+1��j+1��Χ�ڵ�����������г���
        for(int i=0;i<length;i++)
        {
            dp[i][i]=1;    //����������ʼ������Ҫ ��һ������ʱ������
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
                        dp[i][j]=dp[i+1][j-1]+2; //����
                }
                else
                    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);//����µ����ֵ
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
