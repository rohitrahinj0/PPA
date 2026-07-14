#include <stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 90.99f;
    double d = 78.67890;

    printf("Size of Variable\n");
    printf("%lu\n", sizeof(ch));      // 1 byte
    printf("%lu\n", sizeof(i));      // 4 byte
    printf("%lu\n", sizeof(f));      // 4 byte
    printf("%lu\n", sizeof(d));      // 8 byte

  return 0;
}