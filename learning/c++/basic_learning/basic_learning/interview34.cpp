#include<iostream>
#include<vector>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
};

class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {

        dfs(root,sum);

        return result;

    }
    void dfs(TreeNode* root,int sum){
        if(root==NULL) return;

        int value=root->val;
        path.push_back(value);
        sum -=value;
        if(root->left==NULL&&root->right==NULL&&sum==0)
            result.push_back(path);

        dfs(root->left,sum);
        dfs(root->right,sum);

        path.pop_back();
    }
};

int main()
{
    ;
}
