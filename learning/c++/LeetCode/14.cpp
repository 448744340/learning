#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    string longestCommonPrefix(vector<string>& strs){
        int length = strs.size();
        if(length == 0) return "";
        if(length == 1) return strs[0];
        string result="";
        int flag=0;
        for(int j=0;flag!=1;j++)
        {
            for(int i=0;i<length;i++)
            {
                if(strs[i]=="")
                    flag=1;
                if((j+1)==strs[i].size())
                    flag=1;
                if(strs[0][j]!=strs[i][j])
                    return result;
            }
            result +=strs[0][j];
        }
        return result;
    }

};

int main()
{
    Solution s;
    vector<string> strs={"",""};
    cout<<s.longestCommonPrefix(strs);
}
