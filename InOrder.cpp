#include<bits/stdc++.h>
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
Node *buildTree(vector<int> inoder){
    idx++;
    if(inoder[idx] == -1){
        return NULL;
    }
    Node *root = new Node(inoder[idx]);
    root->left = buildTree(inoder);
    root->right = buildTree(inoder);
    return root;
}

void InOrder(Node* root){
    if(root == NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

int main()
{
    vector<int> in = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = buildTree(in);
    InOrder(root);
    return 0;
}