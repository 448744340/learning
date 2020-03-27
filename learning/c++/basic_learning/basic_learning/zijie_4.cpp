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
        for(int j=m;j>1;j--) //保证父节点自己被取到
        {
            for(int k=1;k<=j;k++) //k代表的含义要弄清楚
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
        vec[pre].push_back(i); //这个vector存放攻克key后能去的节点
        for(int j=1;j<=m;j++)
        {
            dp[i][j]=value;//初始化时 每个节点的值都加上自己
        }
    }
    dfs(0);//从0节点开始，实际该节点为虚拟添加

    printf("%d",dp[0][m]);
}
