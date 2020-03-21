#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> twoSum(vector<int>& nums,int target){
        int length = nums.size();
        for(int i=0;i<length-1;i++)
        {
            for(int j=i+1;j<length;j++)
            {
                if((nums[i]+nums[j])==target){
                    cout << "{" <<i<<","<<j<<"}";
                    return {i,j};
                }
            }
        }

        return {};
    }
};

int main(){
    Solution s;
    vector<int> G ={2,7,11,15};
    int target = 9;
    s.twoSum(G,target);
}
