#include <iostream>

using namespace std;

void swap(int &x,int &y){
    // if not refrence doesnot get modified 
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    
    //--------------------------------------
   int x=10;
   int &y=x;
   cout<<y<<" ";    //10
   x=x+5;
   cout<<y<<" " ;    //15
   y=y+5;
   cout<<x<<" ";     //20
   cout<<endl;
   //making changes to either x or y will do changes in both
   
   //---------------------------------------
   int x1=10;
   int y1=15;
   swap(x,y);
   cout<<x1<<" "<<y1<<endl;
   
   //--------------------------------------
   
   /*passing vector by refrence really helps because it avoids the copying
   and saves cpus times and memory and
   if we only wants to acces the vector in a another method then simply
   use " const vector<int>& v "
   */
   
   //---------------------------------------
   
   int x2=10,z=20;
   int &y2=x2;
   y2=z; 
   y2+=5;
   cout<<x2<<" "<<y2<<" "<<z<<endl
  /* once refrence is assigned which is y2 is assigned to x here so , it can
  only be assigned once it means y2=z won't do anything
  */
   
   return 0;
}
