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

int sizeofbt(Node *root)
{
    if(root==NULL) return 0;
    
    return 1 + sizeofbt(root->left) + sizeofbt(root->right);
    
}

int getmaxInBst(Node *root)
{
    if(root==NULL) return INT_MIN;
    
    return max({root->value, getmaxInBst(root->left), getmaxInBst(root->right)});
    
}
//max nodes from root to leaf

int height(Node *root)
{
    if(root==NULL) return 0;
    
    return 1+ max(height(root->left), height(root->right));
}


// nodes at k distance from root

void printKDistant(Node *root , int k)
{
    if(root == NULL|| k < 0 )
        return;
    if( k == 0 )
    {
        cout << root->value << " ";
         return;
    }
     
        printKDistant( root->left, k - 1 ) ;
        printKDistant( root->right, k - 1 ) ;
     
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(9);
    root->left->right = new Node(3);
    root->left->right->left = new Node(5);

    cout<<"Preorder traversal is: ";
    preorder(root);
    cout<<endl;
    cout<<"Normal inorder traversal: ";
    inorder(root);
    cout<<endl;
    cout<<"Inorder traversal using stack is: ";
    stackinorder(root);
    
    cout<<endl;
    cout<<"Size of bst is: "<<sizeofbt(root)<<endl;
    cout<<"Max element is: "<<getmaxInBst(root)<<endl;
    cout<<"Height is: "<<height(root)<<endl;
    cout<<"Nodes at k distance apart are: ";
    printKDistant(root,2);
    return 0;
}
