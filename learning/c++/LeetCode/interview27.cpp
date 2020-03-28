#include<iostream>
#include<queue>
using namespace std;


class Solution {
public:
    queue<TreeNode*> q;
    TreeNode* mirrorTree(TreeNode* root) {
        q.push(root);
        while(!q.empty())
        {
            TreeNode *temp=q.front();
            q.pop();
            if(temp==NULL)
                continue;
            swap(temp->left,temp->right);
            q.push(temp->left);
            q.push(temp->right);
        }
        return root;
    }
};


int main()
{
    ;
}
