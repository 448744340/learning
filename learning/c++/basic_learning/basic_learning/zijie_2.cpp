#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

struct node{
    int position; //距离起点的位置
    int supply; //补给量
    bool operator<(const node &a)const
    {
        return position<a.position;
    }
}stop[10005];
priority_queue<int> que;

int main()
{
    int D,W;
    cin>>D>>W;
    cin.ignore();

    char value;
    int nums=0;
    int accept;
    while((value=getchar())!='\n')
    {
        if(value>='0'&&value<='9')
        {
            ungetc(value,stdin);
            cin>>accept;
            stop[nums].position=accept;
            nums++;
        }
    }
    //nums代表补给点的数量

    for(int j=0;j<nums;j++)
    {
        cin>>accept;
        stop[j].supply=accept;
    }
    sort(stop,stop+nums);

    int count=0;
    int temp=0;
    que.push(W);
    int L=D; //L用于表示当前与终点的距离
    while(L>0&&!que.empty())
    {
        L -=que.top();
        que.pop();
        count++;
        while((D-L)>=stop[temp].position&&temp<nums)
        {
            que.push(stop[temp].supply);
            temp++;
        }
    }

    if(L>0)
        cout<<"-1"<<endl;
    else
        cout<<count-1<<endl;

}
