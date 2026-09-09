#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int v)
    {
        data = v;
        right = NULL;
        left = NULL;
    }
};

static int idx = -1;
Node *buildTree(vector<int> post){
    idx++;
    if(post[idx] == -1){
        return NULL;
    }
    Node* root = new Node(post[idx]);
    root->left = buildTree(post);
    root->right = buildTree(post);
    return root;
}

void PostOrder(Node* root){
    if(root == NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    vector<int> pos = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = buildTree(pos);
    PostOrder(root);
    return 0;
}