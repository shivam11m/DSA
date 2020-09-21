#include <iostream>

using namespace std;


int &fun(){
    static int x=10;
    return x;
}

int main()
{
   int &z=fun();
   cout<<fun()<<" ";
   z=30;
   cout<<fun()<<" ";
   return 0;
}

//refrences creates an alias , it means they point to same locations
// refrences are implemented using constant pointers, only in cpp
// must be assigned when declared mtlb value assign kro refrence ko
// cannot referr to another location unlike pointers , which can be changed
// cannot be NULL
// safer ( because pointers if not intialized can be pointing to anythin
//(could create a problem)
// easier to use
