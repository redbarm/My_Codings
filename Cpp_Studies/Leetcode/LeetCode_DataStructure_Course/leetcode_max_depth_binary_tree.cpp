#include <iostream>
#include <algorithm>

using namespace std;
struct Node {
    int val;
    Node* left;
    Node* right;
    Node (int val):val(val),left(nullptr),right(nullptr){}
};

int dfs(Node* node){
    if (node==nullptr){return 0;}
    int left=dfs(node->left);
    int right=dfs(node->right);
    return max(left,right)+1;
}

int main(){
    Node* root=new Node(0);
    Node* one=new Node(1);
    Node* two=new Node(2);  
    Node* three=new Node(3);
    Node* four=new Node(4);
    Node* five=new Node(5);
    Node* six=new Node(6);

    root->left=one;
    root->right=two;
    one->left=three;
    one->right=four;
    two->right=five;
    five->right=six;

    cout<<dfs(root)<<endl;

}

