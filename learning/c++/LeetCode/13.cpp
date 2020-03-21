#include<iostream>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> Roman2Int = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int length = s.size();
        int value=0;
        for(int i=0;i<length;i++)
        {
            if(Roman2Int[s[i]] < Roman2Int[s[i+1]])
                {value -= Roman2Int[s[i]];}
            else
                {value += Roman2Int[s[i]];}
        }
        return value;

    }
};

int main()
{
    Solution s;
    string str;
    cout<<"Enter roman string:";
    cin >> str;
    cout << s.romanToInt(str);
}
