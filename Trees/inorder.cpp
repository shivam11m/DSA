#include <iostream>
#include<bits/stdc++.h>
typedef long long lp;
using namespace std;


struct Node{
    struct Node *left;
    struct Node *right;
    int value;
    
    Node(int val)
    {
        left=NULL;
        right = NULL;
        value = val;
    }
};

void preorder(Node *root){
    
    if(root!=NULL)
    {
        preorder(root->left);
        preorder(root->right);
        cout<<root->value<<" ";
    }
}

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->value<<" ";
        inorder(root->right);
    }
}

void stackinorder(Node *root)
{
    
    stack<Node*>st;
    
    while(!st.empty()|| root){
    
        if(root){
            st.push(root);
            root=root->left;
        }
        else{
            root = st.top();
            st.pop();
            cout<<root->value<<" ";
            root=root->right;
        }
    }
}



int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(25);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    stackinorder(root);
    return 0;
}
