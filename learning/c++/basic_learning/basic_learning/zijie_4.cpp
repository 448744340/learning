#include<iostream>
#include<string.h>
#include<stdio.h>
#include<vector>
using namespace std;

#define mst(a,b) memset((a),(b),sizeof(a))

const int maxn=200;
int dp[200][200];
vector <int> vec[maxn];
int n,m;


void dfs(int father)
{
    for(int i=0;i<vec[father].size();i++)
    {
        int child = vec[father][i];
        if(vec[child].size()>0)
            dfs(child);
        for(int j=m;j>1;j--) //��֤���ڵ��Լ���ȡ��
        {
            for(int k=1;k<=j;k++) //k����ĺ���ҪŪ���
            {
                dp[father][j]=max(dp[father][j],dp[father][j-k] + dp[child][k]);
            }
        }

    }
}

int main()
{
    int pre,value;
    mst(dp,0);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&pre,&value);
        vec[pre].push_back(i); //���vector��Ź���key����ȥ�Ľڵ�
        for(int j=1;j<=m;j++)
        {
            dp[i][j]=value;//��ʼ��ʱ ÿ���ڵ��ֵ�������Լ�
        }
    }
    dfs(0);//��0�ڵ㿪ʼ��ʵ�ʸýڵ�Ϊ�������

    printf("%d",dp[0][m]);
}
