#include<stdio.h>

int main()
{
   char ch = 'A';
   int i = 21;
   float f = 12.31f;
   double d =89.90;

   printf("size of character is : %d bytes\n",sizeof(ch));
   printf("size of integer is : %d bytes\n",sizeof(i));
   printf("size of float is : %d bytes\n",sizeof(f));
   printf("size of double is : %d bytes\n",sizeof(d));

   printf("Base of character is : %d\n",&ch);
    printf("Base of integer is : %d\n",&i);
     printf("Base of float is : %d\n",&f);
      printf("Base of double is : %d\n",&d);
    return 0;
}