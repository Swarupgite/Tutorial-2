#include<stdio.h>
struct Demo 
{
    int *p;
    float *q;
    double d;
};

int main()
{
   struct Demo obj;

   int i = 11;
   float f = 90.90;

  obj.p = &i;
  obj.q = &f;
  obj.d = 90.99999;

  printf("%d\n",obj.p);
  printf("%u\n",obj.q);
  printf("%u\n",obj.d);




    return 0;
}