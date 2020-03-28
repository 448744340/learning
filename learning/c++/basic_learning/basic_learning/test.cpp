#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<stdio.h>
#include<unordered_map>
#include<queue>

using namespace std;


struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
};

class Node{
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val):val(_val),next(NULL),random(NULL) {}
};

int main()
{

    char c='a';
    string str="";
    str +=c;
    cout<<str;

}
