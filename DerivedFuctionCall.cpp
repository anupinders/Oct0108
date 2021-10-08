#include <iostream>
using namespace std;

class Base{
  public:
  int b;
  void display()
  {
    cout<<"Inside the base display"<<endl;
  }
  virtual void show()// this allows the system to override the function in the derived class during the funtime
  {
    cout<<"show() Base class\n";
    //cout<<"b="<<b<<"\n";
  }

};

class Derived :private Base{
  public:
  int d;
  void display()
  {
    cout<<"Inside the deroved display"<<endl;
  }
  void show(int b)//overload .... parlally show()
  {
    //Base::show();
    cout<<"show() Derivedclass\n";
    //cout<<"b="<<b<<"\n"<<"d="<<d<<"\n";
  }
};
int main() {
  Base bobj;
  Derived dobj;
  
  Base *bptr;//pointer of base class
  bptr = &bobj;//base class object
  cout<<"Base class object is reference in the base pointer"<<endl;
  bptr->display();
  bptr->show();

  bptr = &dobj;//base class object
  cout<<"derived class object is reference in the base pointer"<<endl;
  bptr->display();
  bptr->show();
  //bptr->b=10;

  // cout<<"Right now base class pointer pointing to base class object\n";
  // bptr->show();

  //bptr = &dobj;//pointer is from the base class and pointing to the derived class object
  //bptr->b=90;
  //bptr->d=20;

  // cout<<"Right now base class pointer pointing to derived class object\n";
  // bptr->show();
  // Derived *dptr;
  // dptr=&dobj;//pointer to the derived class 
  // dptr->d=300;
  // cout<<"Right now using pointer to Derived Class object\n";
  // dptr->show();
  // cout<<"using the typecasting of derived class pointer on base class pointer";
  // ((Derived*)bptr)->d=40;
  //   ((Derived*)bptr)->show();
   return 0;
}