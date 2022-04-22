#include <iostream>
#include<bits/stdc++.h>
typedef long long lp;
using namespace std;

struct node{
    node *left;
    node *right;
    int val;
    node(int key){
        left =NULL;
        right = NULL;
        val = key;
    }
};

node* insert(node *root, int r)
{
    if(root== NULL)
    {
        return new node(r);
    }
    
    if(root->val >r)
    {
        root->left = insert(root->left, r);
    }
    else if(root->val <r)
    {
        root->right = insert(root->right,r);
    }
    return root;
    
}

void inorder(node *root)
{
    stack<node*>st;
    
    
    while(!st.empty()|| root)
    {
        if(root){
            st.push(root);
            root = root->left;
        }
        else{
            root = st.top();
            st.pop();
            cout<<root->val<<" ";
            root = root->right;
        }
    }
}

int main()
{
    node *root = new node(10);
     insert(root, 20);
     insert(root, 30);
     insert(root, 5);
     insert(root, 9);
    
    inorder(root);
    

   return 0;
}
