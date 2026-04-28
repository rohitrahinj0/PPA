#include <stdio.h>

int Addition(int no1, int no2)
{
  int Ans = 0;
  Ans = no1 + no2;
  
  return Ans;
}

int main()
{
  int Ret = 0, A = 0, B = 0;

  printf("Enter Number :");
  scanf("%d", &A);
   printf("Enter Number :");
  scanf("%d", &B);
  
  Ret = Addition(A,B);
  
  printf("Addition is : %d\n", Ret);
  return 0;
}