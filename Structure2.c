#include<stdio.h>
struct Demo 
{
    int no;
    int Arr[3];
    float f;
}

int main()
{
   struct Demo obj;

   obj.no = 10;

   obj.Arr = 20;
   obj.Arr = 30;
   obj.Arr = 40;

   obj.f = 90.90;



    return 0;
}