#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int value;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                value = nums[i];
                count++;
            }
            else
            {
                if(value == nums[i])
                    count++;
                else
                    count--;
            }

        }
        return value;
    }
};
int main(){
    Solution s;
    vector<int> nums={3,2,3};
    cout<< s.majorityElement(nums);
}

