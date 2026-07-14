#include <iostream>
using namespace std;

class findd
{
    public :
    static int isfind(int Arr[], int size)
    {
        int big=0;
        for (int i=0; i<size; i++)
        {
            if (Arr[i] > big)
            {
                big=Arr[i];
            }
            
        }
        return big;
    } 
};
int main()
{
    int Arr[] = {4,10,45,30,27,8};

    
    cout << findd::isfind(Arr, 6) << "\n";

    return 0;
}