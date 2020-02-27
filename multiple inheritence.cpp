#include <iostream>
using namespace std;
class A
{
     int a;
     public:
     void get()
     {
       cout<<"enter a";
       cin>>a;
     }

};
class B
{    
  int b;
  public:
  void get()
  {
     cout<<"enter b";
     cin>>b;
  }
};
class c:public A,public B
{public:
 void get()
{
     cout<<"a";
}
};

int main() {
  c c1;
  c1.A::get();
  c1.B::get();

  
}
