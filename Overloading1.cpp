#include<iostream>
using namespace std;

class Demo
{
    public:
    //1000
    int Addition(int A,int B)
    {
        int Ans = 0;
        Ans = A+B;
        return Ans;
    }
    //2000
    int Addition(int A,int B, int C)
    {
        int Ans = 0;
        Ans = A + B + C;
        return Ans;
    }
    //3000
    float Addition(float A, float B)
    {
        float Ans = 0.0f;
        Ans = A+B;
        return Ans;
    }
};
int main()
{
  Demo obj;

  int i = 10, j = 20, k = 30;
  int Ret = 0;
  float p = 90.0, q = 80.0, fret = 0.0;

  fret = obj.Addition(p,q);           // CALL 3000
  cout<<"Addition is : "<<fret<<"\n";


  Ret = obj.Addition(i,j);            // CALL 1000
  cout<<"Addition is : "<<Ret<<"\n";
  
  Ret = obj.Addition(i,j,k);          // CALL2000
  cout<<"Addition is : "<<Ret<<"\n";


    return 0;
}