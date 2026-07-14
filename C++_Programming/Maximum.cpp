#include <iostream>
using namespace std;

class Demo
{ public :
  int i = 0;
  int j = 0;

  int max(int i, int j)
  {
    if (j<i)
    {
      cout<<"Maximum is :"<<i<<"\n";
      return i;
    } else {
      cout<<"Maximum is :"<<j<<"\n";
      return j;
    }
   
  }

};

int main()
{
  Demo dobj;
  int a = 10;
  int b = 20;
int Ans = 0;
Ans = dobj.max(a,b);

}