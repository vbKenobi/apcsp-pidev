#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'A';
  float c = 1.23;
  double d = 1.33456234;
  long int e = 346758235;
  short int f = 3; 
  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %c and size: %c bytes\n", b, sizeof(b));
  printf("float c value: %f and size: %f bytes\n", c, sizeof(c));
  printf("double d value: %g and size: %g bytes\n", d, sizeof(d));
  printf("long int e value: %li and size: %li bytes\n", e, sizeof(e));
  printf("short int f value: %hd and size: %hd bytes\n", f, sizeof(f));    
}
