#include<iostream>
#include<stdio.h>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *leftchild;
    TreeNode *rightchild;
    TreeNode(int x):val(x),leftchild(NULL),rightchild(NULL){}
};

class Solution{
public:
    int maxDepth(TreeNode* root){
        if(root==NULL) return 0;
        return max(maxDepth(root->leftchild),maxDepth(root->rightchild))+1;
    }
};

int main()
{
    ;
}
