#include <iostream>
#include<bits/stdc++.h>
typedef long long int lp;
using namespace std;

struct node{
    node *next;
    int val;
};
node *head=NULL;

void insert(int data){
   node *curr=new node();
   curr->val=data;
   curr->next=head;
   node *ptr=head;
   
   if(head!=NULL){
       while(ptr->next!=head){
           ptr=ptr->next;
       }
       ptr->next=curr;
   }
   else{
       curr->next=curr;
   }
   head=curr;
    
}

void print(){
    node *curr=head;
   do{
       cout<<curr->val<<" ";
       curr=curr->next;
   }while(curr!=head);
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
   return 0;
}
