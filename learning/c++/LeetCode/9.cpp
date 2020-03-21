#include<iostream>
using namespace std;
class Solution {
public:
    int reverse(int x)
    {
        int result=0;
        while(x)
        {
            if(result>INT_MAX/10) return 0;
            if(result<INT_MIN/10) return 0; //这里重点在判断越界
            result = result*10 + x%10;
            x = x/10;
        }
        return result;
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        int y = reverse(x);
        if (y)
        {
            if(x==y) return true;
            else return false;
        }
        else return 0;

    }
};

int main()
{
    Solution s;
    int num;
    cout<<"Enter an integer:";
    cin >>num;
    cout<<boolalpha<<bool(s.isPalindrome(num));
}
