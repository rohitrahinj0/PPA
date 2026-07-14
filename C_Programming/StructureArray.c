#include <stdio.h>

struct Hello
{
  float f;          // 4 bytes
  int Arr[3];       // 12 bytes

}hobj;              // Total 16

int main()
{
  printf("size of Object is : %lu\n",Sizeof(hobj));

  return 0;
}