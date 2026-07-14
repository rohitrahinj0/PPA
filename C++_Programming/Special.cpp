#include <iostream>
using namespace std;

class Demo
{
  public :
        int i;                //Charactristics. 4
        float f;              //Charactristics. 4

        Demo()                //Constructor
        {
          cout<<"Inside Constructor\n";
          i = 0;
          f = 0.0f;

        }

        ~Demo()               //Destructor
        {
            cout<<"Inside Destructor\n";
        }

        void fun()            //Behaviour.      0
        {
          cout<<"Inside Fun \n";
        }
};


int main() 
{ 
  cout<<"Inside main\n";

  Demo dobj;                  //Object Creation

  cout<<dobj.i<<"\n";

  dobj.fun();

cout<<"End of main\n";
  return 0;
}