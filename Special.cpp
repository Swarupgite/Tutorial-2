#include<iostream>
using namespace std;

class  Demo // class Defination
{
    public: // Access specifier
    int i;
    int j;

    Demo()   // Default constructor
    {
       cout<<"Inside default constructor\n";
       i = 0;
       j = 0;
    }

    Demo(int A, int B) // Parameterize Constructor
    {
       cout<<"Inside parameterised constructor\n";
       i = A;
       j = B;
    }

    // Demo &ref = obj2;
    Demo(Demo &ref) //Copy constructor
    {
        cout<<"Inside Copy constructor\n";
        i = ref.i;
        j = ref.j;
    }

    ~Demo()
        {
            cout<<"Inside Destructor\n";
        }
    

};
int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);


    return 0;
}