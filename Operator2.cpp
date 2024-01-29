#include<iostream>
using namespace std;

class Demo
{
    public:
    int i,j;
    int (int a = 10, int b = 20)
    {
        i = a;
        j = b;
    }
    Demo operator +(Demo op1, Demo op2)
    {

      return Demo(this->iop1.i+op2.i, this->jop1.j+op2.j);
    }
};


int main()
{
    Demo obj1(11,21);
    Demo obj1(5,6);
    Demo obj1(0,0);

    obj = obj1 + obj2;

    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";

    return 0;
}
