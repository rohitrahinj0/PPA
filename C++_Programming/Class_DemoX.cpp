#include <iostream>
using namespace std;

class Demo
{
  public :
        int i;                //Charactristics. 4
        float f;              //Charactristics. 4

        void fun()            //Behaviour.      0
        {
          cout<<"Inside Fun \n";
        }
};

int main() 
{

  Demo dobj;

  cout << sizeof(dobj)<<"\n";    //total.  8 bytes



  return 0;
}