#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;


struct node
{
    int x,y,step;
}now,nex;

const int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};//������ʾ��һ�����ߵ����ֿ��� ��������

map<int,int> kk; //keyΪmap���洫���Ŷ�Ӧ�����֣�value��Ӧ����һ����Ӧ��ֵ����ͬ��key��Ӧ��value��һ����������vec���������value��key��ȷ��������


vector<pair<int,int>> vec[3*3];//keyΪһ��value�������ŵ�����Ψһȷ��һ��value��ÿ��Ԫ�طֱ�һ������ ������ʾ��Сһ��Ϊ2 ��ʾһ�Դ�����

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

        if(mp[now.x][now.y]>0)  //�жϵ�ǰ���Ƿ�Ϊ������
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
    vector<vector<int>> mp(n,temp); //�Թ�ͼ
    vector<vector<int>> vs(n,temp); //���ʱ��
    int start_x,start_y;
    int tem=1;//��1 ��ʼ ��Ϊmap��vectorĬ��ֵΪ0 ��û�д����� ���ж�ʱ��Ϊ0



    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mp[i][j];
            if(mp[i][j]==-2)
                start_x=i,start_y=j;
            else if(mp[i][j]>0)//��ʾ��ǰ��Ϊ�����ŵ�
            {
                if(kk[mp[i][j]]==0)
                    kk[mp[i][j]]= tem++;
                vec[kk[mp[i][j]]].push_back(make_pair(i,j));
            }
        }
    }

    cout<<bfs(mp,vs,start_x,start_y);
}

