#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    node *next;
    node *prev;
    int val;
    
    
};

node *head=NULL;
void insert(int data){
    node *curr1=new node();
    curr1->val=data;
    curr1->prev=NULL;
    curr1->next=head;
    if(head!=NULL){
        head->prev=curr1;
    }
            head=curr1;
}

void printt(){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->val<<" ";
        curr=curr->next;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        insert(r);
    }
    printt();
    

   return 0;
}
