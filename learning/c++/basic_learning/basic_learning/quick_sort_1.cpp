#include<iostream>
#include<vector>

using namespace std;


void quick_sort(vector<int> &a,int left,int right)
{
    if(left>=right) return;
    int l=left;
    int r=right;
    int base=a[left];

    while(l<r)
    {
        while(l<r && a[r]>=base)
            r--;
        while(l<r && a[l]<=base)
            l++;
        swap(a[l],a[r]);
    }
    swap(a[left],a[l]);

    quick_sort(a,left,l-1);
    quick_sort(a,l+1,right);
}

int main()
{
    vector<int> a={2,5,4,9,7,8,3,6,123,8979};
    quick_sort(a,0,a.size()-1);

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
