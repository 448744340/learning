#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int _val):val(_val),left(NULL),right(NULL){}
};


class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0||inorder.size()==NULL) return NULL;

        TreeNode *root=new TreeNode(preorder[0]);

        int count=0;
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i]==preorder[0])
                break;
            else
                count++;
        }//先求出当前根节点在中序遍历中的位置
        vector<int> left_preorder,right_preorder;
        vector<int> left_inorder,right_inorder;

        for(int i=0;i<count;i++)
        {
            left_inorder.push_back(inorder[i]);
        }
        for(int i=count+1;i<inorder.size();i++)
        {
            right_inorder.push_back(inorder[i]);
        }
        for(int i=1;i<preorder.size();i++)
        {
            if(i<=count)
            {
                left_preorder.push_back(preorder[i]);
            }
            else
            {
                right_preorder.push_back(preorder[i]);
            }
        }

        root->left=buildTree(left_preorder,left_inorder);
        root->right=buildTree(right_preorder,right_inorder);


        return root;

    }
};
int main()
{
    ;
}
