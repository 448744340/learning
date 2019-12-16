#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main(){
    stack<int>s;
    s.push(1);
    s.push('a');
    cout <<s.top();
}
