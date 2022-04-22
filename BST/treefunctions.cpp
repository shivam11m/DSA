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

int floorbst(node *root, int x)
{
    node *res= NULL;
    while(root!=NULL){
        if(root->val==x){
            return root->val;
        }
        else if(root->val>x){
            root = root->left;
        }
        else{
            res= root;
            root=root->right;
        }
    }
    return res->val;
}

int ceilbst(node *root, int x)
{
    node *res =NULL;
    
    while(root!=NULL)
    {
        if(root->val==x){
            return root->val;
        }
        else if(root->val<x){
            root=root->right;
        }
        else{
            res = root;
            root=root->left;
        }
    }
    return res->val;
}


int main()
{
    node *root = new node(10);
    insert(root, 5);
    insert(root, 10);
    insert(root, 15);
    insert(root, 12);
    insert(root, 30);
    
    inorder(root);
    cout<<endl;
    cout<<"floor of bst is: "<<floorbst(root, 14)<<endl;
    cout<<"ceil of bst is: "<<ceilbst(root, 14)<<endl;

    return 0;
}
