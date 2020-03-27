#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class Solution{
public:
    int f(vector <int> card_points, int index, int each_card_num, int card_num)
    {
        if(card_num==0||index<0||index>=card_num)
            return 0;

        int length=card_num-index;
        int value=0;
        if(length<=each_card_num)
        {
            for(int i=index;i<card_num;i++)
            {
                value += card_points[i];
            }
            return value;
        }
        else
        {
            int SumPoints=0; //当前可抽牌的点数总和
            for(int j=index;j<card_num;j++)
            {
                SumPoints +=card_points[j];
            }

            for(int k=1;k<=each_card_num;k++)
            {
                if((SumPoints-f(card_points,index+k,each_card_num,card_num))>=value)
                    value = SumPoints-f(card_points,index+k,each_card_num,card_num);
            }
            return value;
        }


    }
};


int main()
{
    Solution s;
    int sample_num,card_num,each_card_num,accept;
    scanf("%d",&sample_num);
    for(int i=0;i<sample_num;i++)
    {
        scanf("%d%d",&card_num,&each_card_num);
        vector <int> card_points;
        for(int j=0;j<card_num;j++)
        {
            cin>>accept;
            card_points.push_back(accept);
        }
        cout<<s.f(card_points,0,each_card_num,card_num)<<endl;
    }
}
