#include<iostream>
#include<vector>

using namespace std;

void heap_build(vector<int> &a,int root,int length)
{
    int lchild = 2*root+1;
    if(lchild<length)
    {
        int rchild=lchild+1;
        int flag=lchild;
        if(rchild<length)
        {
            if(a[rchild]>a[flag])
                flag=rchild;
        }

        if(a[root]<a[flag])
        {
            swap(a[root],a[flag]);
            heap_build(a,flag,length);
        }
    }
}


void heap_sort(vector<int> &a,int length)
{
    for(int i=length/2;i>=0;i--)
    {
        heap_build(a,i,length);
    }

    for(int j=length-1;j>0;j--)
    {
        swap(a[j],a[0]);
        heap_build(a,0,j);
    }

}

int main()
{
    vector<int> a={8,5,3,9,7,6,4};
    heap_sort(a,a.size());
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
