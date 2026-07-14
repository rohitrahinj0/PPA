#include <iostream>
using namespace std;

class Demo
{
  public :
        int i;         // 4
        float f;      // 4
};

int main() 
{

  Demo dobj;

  cout << sizeof(dobj)<<"\n";      // total 8



  return 0;
}