#include <iostream>
#include<bits/stdc++.h>
typedef long long int lp;
using namespace std;

struct node{
    node *next;
    node *prev;
    int val;
};


node *head=NULL;
node *last=NULL; // pointer to mark last node so that head doesnt move
                    // to the last and could be printed in print function
void insert(int data){
   node *curr= new node();
   curr->val=data;
   curr->next=NULL;
   curr->prev=last;
   if(last!=NULL){
       last->next=curr;
   }
   last=curr;
   if(head==NULL){
       head=last;
   }
}
void print(){
    node *curr1=head;
    while(curr1!=NULL){
        cout<<curr1->val<<" ";
        curr1=curr1->next;
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
    print();
    /*
    6
    1 2 3 1 2 2 
    */
    
}
