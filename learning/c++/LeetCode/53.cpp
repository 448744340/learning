#include<iostream>
#include<vector>

using namespace std;
class Solution{
public:
    int maxSubArray(vector<int>& nums){
        int length=nums.size();
        if(length==1) return nums[0];
        int result=INT_MIN;
        vector<int> dp(length);
        dp[0]=nums[0];
        result =dp[0];

        for(int i=1;i<length;i++)
        {
            dp[i]=max(dp[i-1]+nums[i],nums[i]);
            result = max(result,dp[i]);
        }

        return result;

    }
};

int main()
{
    Solution s;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<s.maxSubArray(nums);
}
