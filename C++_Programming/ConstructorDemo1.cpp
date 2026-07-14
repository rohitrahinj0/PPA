#include<iostream>
using namespace std;

// Encapsulation
class Marvellous
{
  public:
  int no1, no2;
  
  Marvellous() // default constructor
  {
    cout<<"inside Default constructor\n";
    no1 = 0;
    no2 = 0;

  }

   Marvellous(int a int b) // parameterize constructor
  {
    cout<<"inside parameterize constructor\n";
    
     no1 = a;3ewszqa1  '9hb 
     "'
    no2 = b;

  }
  Marvellous() // copy constructor
  {
    cout<<"inside copy constructor";
  }
  ~Marvellous()
{
  cout<<"inside destructor\n";  // destructor
}
    
};

int main()
{
  cout<<"insidemain\n";
  Marvellous mobj1();        //default obj
  Marvellous mobj2(11,21);     // parameterize obj
  Marvellous mobj3(mobj2);     // copy obj

  
    return 0;
}    // all destructor get call
