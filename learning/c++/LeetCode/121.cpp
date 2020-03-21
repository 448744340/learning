#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int maxProfit(vector<int>& prices){
        if(prices.size()==0)
            return 0;
        int value=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {

                if((prices[j]>prices[i])&&((prices[j]-prices[i])>value))
                    value = prices[j]-prices[i];
            }
        }
        return value;
    }
};

int main()
{
    Solution s;
    vector<int> prices ={7,6,4,3,1};
    cout <<s.maxProfit(prices);
}
