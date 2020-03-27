#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;


struct node
{
    int x,y,step;
}now,nex;

const int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};//用来表示下一步能走的四种可能 上下左右

map<int,int> kk; //key为map上面传送门对应的数字，value对应的是一个相应的值，不同的key对应的value不一样，反过来vec可以用这个value当key来确定传送门


vector<pair<int,int>> vec[3*3];//key为一个value，传送门的种类唯一确定一个value，每个元素分别一个数字 题意所示大小一般为2 表示一对传送门

int m,n;


int bfs(vector<vector<int>> &mp, vector<vector<int>> &vs, int start_x, int start_y)
{
    vs[start_x][start_y]=1;
    queue<node> q;
    q.push({start_x,start_y,0});

    while(q.size())
    {
        now = q.front();
        q.pop();

        if(mp[now.x][now.y]== -3) return now.step;

        if(mp[now.x][now.y]>0)  //判断当前点是否为传送门
        {
            int value = kk[mp[now.x][now.y]];
            if(vec[value][0].first==now.x &&vec[value][0].second==now.y)
            {
                nex.x = vec[value][1].first;
                nex.y = vec[value][1].second;
                nex.step = now.step+1;
                q.push(nex);
                vs[nex.x][nex.y]==1;
            }
            else
            {
                nex.x = vec[value][0].first;
                nex.y = vec[value][0].second;
                nex.step = now.step+1;
                q.push(nex);
                vs[nex.x][nex.y]==1;
            }
        }

        for(int i=0;i<4;i++)
        {
            nex.x = now.x + dir[i][0];
            nex.y = now.y + dir[i][1];
            nex.step = now.step+1;
            if(nex.x>=0 && nex.x<n && nex.y>=0 && nex.y<m && mp[nex.x][nex.y]!=-1 && vs[nex.x][nex.y]!=1)
            {
                q.push(nex);
                vs[nex.x][nex.y] == 1;
            }
        }

    }

    return -1;

}

int main()
{
    cin>>m>>n;
    vector<int> temp(m,0);
    vector<vector<int>> mp(n,temp); //迷宫图
    vector<vector<int>> vs(n,temp); //访问标记
    int start_x,start_y;
    int tem=1;//从1 开始 因为map与vector默认值为0 若没有传送门 在判断时均为0



    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mp[i][j];
            if(mp[i][j]==-2)
                start_x=i,start_y=j;
            else if(mp[i][j]>0)//表示当前点为传送门点
            {
                if(kk[mp[i][j]]==0)
                    kk[mp[i][j]]= tem++;
                vec[kk[mp[i][j]]].push_back(make_pair(i,j));
            }
        }
    }

    cout<<bfs(mp,vs,start_x,start_y);
}

