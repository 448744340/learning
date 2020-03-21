#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct node
{
    int OrderID;
    int CheckIn;
    int CheckOut;
    bool operator< (const node &a) const
    {
        return OrderID<a.OrderID;
    }
};

void printOrderID(struct node information[],int nums,int time)
{
    vector<int>result;
    for(int k=0;k<nums;k++)
    {
        if(information[k].CheckIn<=time && information[k].CheckOut>=time)
        {
            result.push_back(information[k].OrderID);
        }
    }
    if(result.size()==0)
        cout<<"null";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<endl;
    }
}

int main()
{
    int nums;
    cin>>nums;
    int time;
    cin>>time;
    cin.ignore();

    struct node information[nums];

    int accept[3];
    char value;
    int temp;
    int k;
    for(int i=0;i<nums;i++)
    {
        k=0;
        while((value=getchar())!='\n')
        {
            if(value>'0'&&value<'9')
            {
                ungetc(value,stdin);
                cin>>accept[k];
                k++;
            }
        }
        information[i].OrderID=accept[0];
        information[i].CheckIn=accept[1];
        information[i].CheckOut=accept[2];

    }
    sort(information,information+nums);
    printOrderID(information,nums,time);


}
