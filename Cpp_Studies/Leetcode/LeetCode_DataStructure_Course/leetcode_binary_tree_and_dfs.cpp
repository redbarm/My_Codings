#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val): val(val),left(nullptr),right(nullptr){}
};

void dfs(TreeNode* node){
    if (node==nullptr){return;}else{cout<<node->val<<endl;}
    dfs(node->left);
    dfs(node->right);
    return;
}

int main(){
    TreeNode* root=new TreeNode(0);
    TreeNode* one=new TreeNode(1);
    TreeNode* two=new TreeNode(2);
    TreeNode* three=new TreeNode(3);
    TreeNode* four=new TreeNode(4);
    TreeNode* six=new TreeNode(6);
    TreeNode* seven=new TreeNode(7);
    TreeNode* eight=new TreeNode(8);
    TreeNode* five=new TreeNode(5);

    root->left=one;
    root->right=two;
    one->left=three;
    one->right=four;
    three->left=six;
    four->left=seven;
    four->right=eight;
    two->right=five;

    //cout<<root->left->val<<endl;
    //cout<<root->right->val<<endl;

    dfs(root);

}
