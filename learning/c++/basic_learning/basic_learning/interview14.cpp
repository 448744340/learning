#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    int cuttingRope(int n){
        vector<int> dp(n+1);//dp�������Ӷγ˻�����ʱ������ָ����Ϊ0���ﵽ���ֵ��
        if(n==2||n==3) return n-1; //��ʵ����Ǳ���ָ�����1�� ���С�ڵ������������ֱ�ӷ���
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        for(int i=4;i<n+1;i++)
        {
            for(int j=1;j<=i/2;j++)
            {
                dp[i]=max(dp[i],dp[i-j]*dp[j]); //���ǵ�����Ƿָ���߲��ָ� ֻ�����������
            }
        }
        return dp[n];
    }
};
int main()
{
    ;
}
