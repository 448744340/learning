#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution{
public:
    int singleNumber(vector<int>& nums){
        if(nums.size()==1) return nums[0];
        map<int,int> mp;
        int value=nums[0];
        for(int i:nums)
        {
            if(mp.count(i)==0)
                mp[i]=1;
            else
                mp[i]++;
        }
        map<int,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==1)
                value=it->first;
        }
        return value;
    }
};

int main()
{
    Solution s;
    vector<int> nums={9,1,7,9,7,9,7};
    cout<<s.singleNumber(nums);
}
