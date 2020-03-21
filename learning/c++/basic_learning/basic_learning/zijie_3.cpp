#include<iostream>
#include<vector>
#include<queue>

using namespace std;


struct node
{
    int x,y,step;
}now,nex;

const int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};//用来表示下一步能走的四种可能 上下左右

int bfs(vector<vector<int>> mp, vector<vector<int>> vs, int start_x, int start_y)
{
    vs[start_x][start_y]=1;
    return 0;
    queue<node> q;

}


int main()
{
    int m,n;
    cin>>m>>n;
    vector<int> temp(m,0);
    vector<vector<int>> mp(n,temp); //迷宫图
    vector<vector<int>> vs(n,temp); //访问标记
    int accept;
    int start_x,start_y,end_x,end_y;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mp[i][j];
            if(mp[i][j]==-2)
                start_x=i,start_y=j;
        }
    }

    cout<<bfs(mp,vs,start_x,start_y);


}

