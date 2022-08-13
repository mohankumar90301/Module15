#include<stdio.h>
#ifdef _MATH_H
#error Include Math Library
#else
void main()
{
  float a;
  a=sqrt(7);
  printf("if",a);
}
#endif
