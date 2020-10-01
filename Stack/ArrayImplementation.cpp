#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define max 1000
class Stack{
    int top;
    public:
        int a[max]; //size of stack
        Stack(){
            top=-1;
        }
        int push(int x);
        int pop();
};
int Stack::push(int x){
    ++top;
    a[top]=x;
    cout<<"pushed element is "<<a[top]<<"\n";
}
int Stack::pop(){
    int res=a[top];
    cout<<"popped element is "<<res<<"\n";
    top--;
}

int main()
{
    Stack o;
    o.push(10);
    o.push(20);
    o.push(30);
    o.pop();
   return 0;
}
